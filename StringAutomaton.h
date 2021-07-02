#ifndef PROJECTONE_STRINGAUTOMATON_H
#define PROJECTONE_STRINGAUTOMATON_H

#include "Automaton.h"

class StringAutomaton : public Automaton {
private:
    void S1(const std::string& input);

public:
    StringAutomaton() : Automaton(TokenType::STRING) {}

    void S0(const std::string& input);
};


#endif //PROJECTONE_STRINGAUTOMATON_H
