#include "IDAutomaton.h"
#include "FactsAutomaton.h"
#include "RulesAutomaton.h"
#include "SchemesAutomaton.h"
#include <iostream>

void IDAutomaton::S0(const std::string &input) {
    if(isalpha(input[index])){
        inputRead++;
        index++;
        S1(input);
    }
    else{
        Serr();
    }
}
void IDAutomaton::S1(const std::string& input){
    if(isalnum(input[index])){
        inputRead++;
        index++;
        S1(input);
    }



}