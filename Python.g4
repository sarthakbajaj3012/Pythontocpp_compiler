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

if_statement : 'if' '('? comparison_statement ')'? ':' '<<INDENT>>' statement_list '<<DEDENT>>' ( elif )* (elseop)?;

join_op: '&' | 'and' | '|' | 'or';

comparison_statement: comparison (join_op comparison)* ;

comparison: expression (conop expression)?;

elif: 'elif' comparison_statement ':' '<<INDENT>>'statement_list '<<DEDENT>>' ;

elseop : 'else' ':' '<<INDENT>>'statement_list '<<DEDENT>>' ;

functioncall: NAME '(' parameter_list ')';

conop: '>=' | '>' | '<' | '<=' | '==' | '!=' ;

range: 'range' '(' expression ',' expression ')';

for_statement: 'for' NAME 'in' (STRING_LITERAL | NAME | range) ':' '<<INDENT>>' statement_list '<<DEDENT>>';

while_statement : 'while' '('? comparison_statement')'? ':' '<<INDENT>>'statement_list '<<DEDENT>>';

function_statement : 'def' NAME '(' parameter_list ')' ':' '<<INDENT>>'statement_list '<<DEDENT>>';

return_statement : 'return' expression;

expression_statement : expression;

addop : '+' | '-' ;
 
mulop : '*' | '/' | '%' ;

print: 'print(' printtype_list ')';

expression : functioncall | (term ( addop term)*) ;

term : factor ( mulop factor)*;

data_type: STRING_LITERAL | INTEGER | NAME | FLOAT;

print_type: data_type| expression;

printtype_list : print_type (',' print_type )*;

factor :  functioncall | '('expression ')' | data_type;

parameter_list : (parameter (',' parameter)*)?;

parameter : expression;

// Define the tokens used in the grammar
NAME : [a-zA-Z_] [a-zA-Z0-9_]*;
INTEGER : '-'?[0-9]+;
FLOAT : [0-9]* '.' [0-9]+;
STRING_LITERAL : '"' ( ESC | ~["\r\n] )* '"';
ESC : '\\' ( '\\' | 'a' | 'b' | 'f' | 'n' | 'r' | 't' | 'v' | '"' | '\'' );
WHITESPACE : [ \t\r\n]+ -> skip;