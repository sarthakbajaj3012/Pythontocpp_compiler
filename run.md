This is how to run the file:

g++ -std=c++17 -o PythonParser PythonParser.cpp PythonLexer.cpp test.cpp -I /usr/local/include/antlr4-runtime -L /usr/local/lib -lantlr4-runtime 

antlr4 -Dlanguage=Cpp Python.g4
