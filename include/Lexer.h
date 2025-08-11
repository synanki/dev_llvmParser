#pragma once
#include <iostream>

enum Token{
 tok_eof = -1,
 tok_number = -2
};

class Lexer{
   const std::string &Input;
   std::size_t Pos = 0;
   double NumVal;

public:
   Lexer(const std::string &input) : Input(input){}

   int gettok();
   double getNumber() const (return NumVal);
}
