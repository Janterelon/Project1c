cmake_minimum_required(VERSION 3.10.2)
project(Project1a)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project1a main.cpp IDAutomaton.cpp UndefinedAutomaton.cpp Token.cpp Lexer.cpp ColonAutomaton.cpp ColonDashAutomaton.cpp StringAutomaton.cpp CommentAutomaton.cpp FactsAutomaton.cpp QueriesAutomaton.cpp RulesAutomaton.cpp SchemesAutomaton.cpp Matcher.cpp)