grammar Python;

program : statement_list;

statement_list : statement
               | statement_list statement;

statement : assignment_statement
          | if_statement
          | while_statement
          | function_statement
          | return_statement
          | expression_statement;

assignment_statement : NAME '=' expression;

if_statement : 'if' expression ':' statement_list 'elif' expression ':' statement_list 'else' ':' statement_list;

while_statement : 'while' expression ':' statement_list;

function_statement : 'def' NAME '(' parameter_list ')' ':' statement_list;

return_statement : 'return' expression;

expression_statement : expression;

expression : term (('+'|'-') term)*;

term : factor (('*'|'/'|'%') factor)*;

factor : INTEGER
       | FLOAT
       | NAME
       | '(' expression ')';

parameter_list : parameter (',' parameter)*;

parameter : NAME;

// Define the tokens used in the grammar
NAME : [a-zA-Z_] [a-zA-Z0-9_]*;
INTEGER : [0-9]+;
FLOAT : [0-9]* '.' [0-9]+;
WS : [ \t\n\r]+ -> skip;
