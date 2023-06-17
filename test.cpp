#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

std::string executeCommand(const std::string& command) {
    std::string result;
    FILE* pipe = popen(command.c_str(), "r");
    if (pipe) {
        char buffer[128];
        while (!feof(pipe)) {
            if (fgets(buffer, 128, pipe) != NULL)
                result += buffer;
        }
        pclose(pipe);
    }
    return result;
}

std::string getFileContents(const std::string& filename) {
    std::ifstream file(filename);
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

bool compareOutputs(const std::string& file1, const std::string& file2) {
    std::string content1 = getFileContents(file1);
    std::string content2 = getFileContents(file2);
    return content1 == content2;
}

int main() {
    
    system("g++ -std=c++17 -o PythonParser PythonParser.cpp PythonLexer.cpp main.cpp -I /usr/local/include/antlr4-runtime -L /usr/local/lib -lantlr4-runtime "); 

    for(int i = 1; i<= 10; i++){
        std::string test = "test" + std::to_string(i) + ".py";
        std::string cpp_output = executeCommand("./PythonParser " + test);
        std::string python_output = executeCommand("python3 " + test );  
        std::string cpp_filename = "cpp_output" + std::to_string(i) + ".txt";
        std::string python_filename = "python_output" + std::to_string(i) + ".txt";

        std::ofstream cpp_file(cpp_filename);  // Save C++ output to file
        cpp_file << cpp_output;
        cpp_file.close();

        std::ofstream python_file(python_filename);  // Save Python output to file
        python_file << python_output;
        python_file.close();

        if (compareOutputs(cpp_filename, python_filename)) {
            std::cout << "Outputs are the same.Test" << i << " Passed"<< std::endl;
        } else {
            std::cout << "Outputs are different.Test" <<i <<"Failed" << std::endl;
        }
    }
    return 0;
}



    