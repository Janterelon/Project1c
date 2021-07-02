#include "Token.h"
#include <iostream>

Token::Token(TokenType type, std::string description, int line) {
    Ttype = type;
    ident = description;
    numStart = line;
}

std::string Token::TokenString(){
    switch(Ttype){
        case(TokenType::COLON):
            return "COLON";

        case(TokenType::COLON_DASH):
            return "COLON_DASH";

        case(TokenType::Q_MARK):
            return "Q_MARK";

        case(TokenType::PERIOD):
            return "PERIOD";

        case(TokenType::COMMA):
            return "COMMA";

        case(TokenType::COMMENT):
            return "COMMENT";

        case(TokenType::LEFT_PAREN):
            return "LEFT_PAREN";

        case(TokenType::RIGHT_PAREN):
            return "RIGHT_PAREN";

        case(TokenType::MULTIPLY):
            return "MULTIPLY";

        case(TokenType::FACTS):
            return "FACTS";

        case(TokenType::RULES):
            return "RULES";

        case(TokenType::ADD):
            return "ADD";

        case(TokenType::QUERIES):
            return "QUERIES";

        case(TokenType::SCHEMES):
            return "SCHEMES";

        case(TokenType::ENDOFFILE):
            return "EOF";

        case(TokenType::ID):
            return "ID";

        case(TokenType::STRING):
            return "STRING";

        case(TokenType::UNDEFINED):
            return "UNDEFINED";
    }
    return "";
}

std::string Token::To_String(){




    std::string output;
    output = "(";
    output.append(TokenString());
    output.append(",\"");
    output.append(ident);
    output.append("\",");
    std::string num = std::to_string(numStart);
    output.append(num);
    output.append(")");

    return output;
}
