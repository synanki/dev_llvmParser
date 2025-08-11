#include <iostream>

int main(){
   std::string line;
   while(true){
     std::cout << ">>> ";
     if(!std::getline(std::cin,line))break;
     if(line.empty()) continue;

     try{
       //lexer 
       //parser
       //create ast from parsedExpressions
       //codegen
       //print val
   }catch(const std::exception &e){
      std::cerr << "Error : " << e.what() <<"\n";
   }
 }
}
