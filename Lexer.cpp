#include "Lexer.h"
#include "Matcher.h"
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
#include "CommentAutomaton.h"
#include "FactsAutomaton.h"
#include "IDAutomaton.h"
#include "QueriesAutomaton.h"
#include "RulesAutomaton.h"
#include "SchemesAutomaton.h"
#include "StringAutomaton.h"
#include "UndefinedAutomaton.h"
#include <iostream>

Lexer::Lexer() {
    CreateAutomata();
}

Lexer::~Lexer() {
    //for(unsigned int i = 0; i < automata.size(); i++){
        //delete automata[i];
    //}
    //for(unsigned int i = 0; i < tokens.size(); i++){
        //delete tokens[i];
    //}

}

void Lexer::CreateAutomata() {
    automata.push_back(new ColonAutomaton());
    automata.push_back(new ColonDashAutomaton());
    automata.push_back(new Matcher());
    automata.push_back(new CommentAutomaton());
    automata.push_back(new FactsAutomaton());
    automata.push_back(new QueriesAutomaton());
    automata.push_back(new RulesAutomaton());
    automata.push_back(new SchemesAutomaton());
    automata.push_back(new StringAutomaton());
    automata.push_back(new IDAutomaton());
    automata.push_back(new UndefinedAutomaton());

}

void Lexer::Run(std::string& input) {
    int lineNumber = 1;
    int maxRead = 0;
    while(input.size() > 0) {
        if (isspace(input[0])) {
            maxRead = 1;
            if(input[0] == '\n'){
                lineNumber++;
            }
        }
        else{
            maxRead = 0;
            Automaton *maxAutomaton = automata[0];
            for (unsigned int i = 0; i < automata.size(); ++i) {
                automata[i]->Start(input);
                if (automata[i]->getRead() > maxRead) {
                    maxRead = automata[i]->getRead();
                    maxAutomaton = automata[i];
                }
            }



            if (maxRead > 0) {
                Token *newToken = maxAutomaton->CreateToken(input.substr(0, maxRead), lineNumber);
                if(newToken->TokenString() == "STRING"){
                    lineNumber += automata[8]->NewLinesRead();
                }
                tokens.push_back(newToken);
            } else {
                maxRead = 1;
                //std::string cha = std::to_string(input[0]);
                //Token* newToken = new Token(TokenType::UNDEFINED,cha,lineNumber);//TODO Fix this
                //tokens.push_back(newToken);
            }

        }

            input.erase(0,maxRead);

        }
    Token* token1 = new Token(TokenType::ENDOFFILE,"",lineNumber);
    tokens.push_back(token1);
    for(unsigned int i = 0; i < tokens.size(); i++){
        std::cout << tokens[i]->To_String() << std::endl;
    }
    std::cout << "Total Tokens = " << tokens.size();
}
