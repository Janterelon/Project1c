#include "Lexer.h"
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    Lexer *lexer = new Lexer();
    std::string Hello = argv[1];
    std::fstream file1;
    file1.open(Hello);
    std::string allString = "";
    std::string fullLine = "";
    while(getline(file1,fullLine)){
        allString = allString + fullLine + '\n';
    }
    file1.close();
    lexer->Run(allString);
    delete lexer;
    return 0;

    //TODO ID,STRING,UNDEFINED,EOF,main,lexer,token, FINISH COMMENT
}