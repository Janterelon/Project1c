#ifndef PROJECTONE_EOFAUTOMATON_H
#define PROJECTONE_EOFAUTOMATON_H

#include "Automaton.h"

class EOFAutomaton : public Automaton
{
public:
    EOFAutomaton() : Automaton(TokenType::ENDOFFILE) {}
    void S0(const std::string& input);

};


#endif //PROJECTONE_EOFAUTOMATON_H
