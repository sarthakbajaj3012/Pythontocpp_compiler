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
          | expression_statement;

assignment_statement : NAME '=' expression ;

if_statement : 'if' '('? comparison')'? ':' '<<INDENT>>' statement_list '<<DEDENT>>' ( elif )* (elseop)?;

comparison: expression (conop expression)?;

elif: 'elif' comparison ':' '<<INDENT>>'statement_list '<<DEDENT>>' ;

elseop : 'else' ':' '<<INDENT>>'statement_list '<<DEDENT>>' ;

conop: '>=' | '>' | '<' | '<=' | '==' | '!=' | 'in';

while_statement : 'while' '('?comparison')'? ':' '<<INDENT>>'statement_list '<<DEDENT>>';

function_statement : 'def' NAME '(' parameter_list ')' ':' '<<INDENT>>'statement_list '<<DEDENT>>';

return_statement : 'return' expression;

expression_statement : expression;

addop : '+' | '-' ;
 
mulop : '*' | '/' | '%' ;

print: 'print(' NAME ')';

expression : term ( addop term)*;

term : factor ( mulop factor)*;

factor : INTEGER
       | FLOAT
       | NAME
       | '(' expression ')';

parameter_list : (parameter (',' parameter)*)?;

parameter : NAME;

// Define the tokens used in the grammar
NAME : [a-zA-Z_] [a-zA-Z0-9_]*;
INTEGER : [0-9]+;
FLOAT : [0-9]* '.' [0-9]+;
WHITESPACE : [ \t\r\n]+ -> skip;