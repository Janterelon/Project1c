#ifndef TOKEN_H
#define TOKEN_H
#include <string>

enum class TokenType {
    COLON,
    COLON_DASH,
    ADD,
    COMMA,
    COMMENT,
    ENDOFFILE,
    FACTS,
    ID,
    LEFT_PAREN,
    MULTIPLY,
    PERIOD,
    Q_MARK,
    QUERIES,
    RIGHT_PAREN,
    RULES,
    SCHEMES,
    STRING,
    UNDEFINED
};

class Token
{
private:
    std::string ident = "";
    TokenType Ttype;
    int numStart = 0;


public:
    Token(TokenType type, std::string description, int line);

    std::string TokenString();
    std::string To_String();

    // TODO: add other needed methods
};

#endif // TOKEN_H

