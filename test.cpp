#include <iostream>
#include <string>


int main() {
    system("g++ -std=c++17 -o PythonParser PythonParser.cpp PythonLexer.cpp main.cpp -I /usr/local/include/antlr4-runtime -L /usr/local/lib -lantlr4-runtime "); // Compile the C++ file
    std::string test = "test";

    for(int i = 1; i <= 3;i++){
        try{
            std::string temp = "./PythonParser " + test + std::to_string(i) +".py";
            system( temp.c_str() );
            std::cout <<"Test passed" << i << std::endl;
        } catch(const char* errorMessage) {
            std::cout << "ERROR " << errorMessage <<std::endl;
            break;
        }

        
    }

    return 0;






}