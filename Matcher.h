#ifndef PROJECT1A_MATCHER_H
#define PROJECT1A_MATCHER_H

#include "Automaton.h"

class Matcher : public Automaton
{
public:
    Matcher() : Automaton(TokenType::UNDEFINED) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //PROJECT1A_MATCHER_H
