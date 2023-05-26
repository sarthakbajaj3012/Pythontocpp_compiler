grammar Python;

program : statement_list;

statement_list : statement
               | statement_list statement;

statement : assignment_statement
          | if_statement
          | while_statement
          | function_statement
          | return_statement
          | print
          | for_statement
          | expression_statement;

assignment_statement : NAME '=' expression ;

if_statement : 'if' '('? comparison')'? ':' '<<INDENT>>' statement_list '<<DEDENT>>' ( elif )* (elseop)?;

comparison: expression (conop expression)?;

elif: 'elif' comparison ':' '<<INDENT>>'statement_list '<<DEDENT>>' ;

elseop : 'else' ':' '<<INDENT>>'statement_list '<<DEDENT>>' ;

functioncall: NAME '(' parameter_list ')';

conop: '>=' | '>' | '<' | '<=' | '==' | '!=' ;

for_statement: 'for' NAME 'in' (STRING_LITERAL | NAME ) ':' '<<INDENT>>' statement_list '<<DEDENT>>';

while_statement : 'while' '('? comparison')'? ':' '<<INDENT>>'statement_list '<<DEDENT>>';

function_statement : 'def' NAME '(' parameter_list ')' ':' '<<INDENT>>'statement_list '<<DEDENT>>';

return_statement : 'return' expression;

expression_statement : expression;

addop : '+' | '-' ;
 
mulop : '*' | '/' | '%' ;

print: 'print(' (STRING_LITERAL | INTEGER | NAME | FLOAT)  ')';

expression : functioncall | (term ( addop term)*);

term : factor ( mulop factor)*;

factor : INTEGER
       | FLOAT
       | NAME
       | STRING_LITERAL
       | '(' expression ')';

parameter_list : (parameter (',' parameter)*)?;

parameter : expression;

// Define the tokens used in the grammar
NAME : [a-zA-Z_] [a-zA-Z0-9_]*;
INTEGER : '-'?[0-9]+;
FLOAT : [0-9]* '.' [0-9]+;
STRING_LITERAL : '"' ( ESC | ~["\r\n] )* '"';
ESC : '\\' ( '\\' | 'a' | 'b' | 'f' | 'n' | 'r' | 't' | 'v' | '"' | '\'' );
WHITESPACE : [ \t\r\n]+ -> skip;