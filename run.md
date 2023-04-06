This is how to run the file:

g++ -std=c++11 -I /path/to/antlr4-runtime -o PythonParser PythonParser.cpp PythonLexer.cpp main.cpp -L /path/to/lib -lantlr4-runtime


g++ -std=c++17 -I /Users/sarthakbajaj/ANTLR-4.12.0/antlr4-runtime -o PythonParser PythonParser.cpp PythonLexer.cpp test.cpp -L /Users/sarthakbajaj/ANTLR-4.12.0/lib -lantlr4-runtime

g++ -std=c++17 -I /Users/sarthakbajaj/ANTLR-4.12.0/antlr4-runtime -o PythonParser PythonParser.cpp PythonLexer.cpp test.cpp /Users/sarthakbajaj/ANTLR-4.12.0/lib/libantlr4-runtime.dylib

g++ -std=c++17 -o PythonParser PythonParser.cpp PythonLexer.cpp test.cpp -I /usr/local/include/antlr4-runtime -L /usr/local/lib -lantlr4-runtime 
