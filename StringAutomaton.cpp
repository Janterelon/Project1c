#include "StringAutomaton.h"

void StringAutomaton::S0(const std::string& input){
    if(input[index] == '\''){
        inputRead++;
        index++;
        S1(input);
    }
    else{
        Serr();
    }
}

void StringAutomaton::S1(const std::string& input){
    if(input[index] == '\n'){
        newLines++;
    }

    if(input[index] == '\''){
        if(input[index+1] == '\''){
            inputRead += 2;
            index += 2;
            S1(input);
        }
        else {
            inputRead++;
        }
    }
    else if (input[index] == input[-1]){
        Serr();
    }
    else {
        inputRead++;
        index++;
        S1(input);
    }
}


