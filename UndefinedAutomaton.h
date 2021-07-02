//
// Created by jacob on 6/29/2021.
//

#ifndef PROJECTONE_UNDEFINEDAUTOMATON_H
#define PROJECTONE_UNDEFINEDAUTOMATON_H


#include "Automaton.h"

class UndefinedAutomaton : public Automaton {
private:
    void S1(const std::string& input);

public:
    UndefinedAutomaton() : Automaton(TokenType::UNDEFINED) {}

    void S0(const std::string& input);
};


#endif //PROJECTONE_UNDEFINEDAUTOMATON_H
