%{
#include "parser.tab.h"
#include "error.h"

#define YYDEBUG 1
%}
%error-verbose

%union {
    TreeNode* node;
}

%token <node> PLUS MINUS STAR SLASH PERCENT EQUAL NOTEQUAL
%token <node> LESSTHAN GREATERTHAN LESSTHANEQ GREATERTHANEQ
%token <node> AND OR NOT
%token <node> OF
%token <node> ARRAY
%token <node> DEF END BEGIN_BLOCK
%token <node> IDENTIFIER
%token <node> STR
%token <node> COMMA
%token <node> DOUBLE_DOT
%token <node> CHAR
%token <node> BIN HEX DEC
%token <node> TRUE FALSE
%token <node> IF ELSE THAN WHILE UNTIL DO BREAK
%token <node> SEMICOLON
%token <node> LPAREN RPAREN LBRACE RBRACE LBRACKET RBRACKET
%token <node> TYPEDEF
%token <node> ARRAY_COMMAS


%type <node> typeRef
%type <node> funcSignature
%type <node> argDef
%type <node> sourceItem
%type <node> listSourceItem
%type <node> statement
%type <node> var
%type <node> if
%type <node> block
%type <node> loop
%type <node> repeat
%type <node> break
%type <node> expression
%type <node> builtin
%type <node> custom
%type <node> array
%type <node> source
%type <node> listArgDef
%type <node> optionalTypeRef
%type <node> literal
%type <node> place
%type <node> slice
%type <node> range
%type <node> listRange
%type <node> expr
%type <node> listExpr
%type <node> optionalListExpr
%type <node> call
%type <node> braces
%type <node> unary
%type <node> binary
%type <node> assignment
%type <node> listVarDeclared
%type <node> listVarDeclaredItem
%type <node> optionalElseStatement
%type <node> listStatement


%%
/* SourceItem */

source: {{$$ = NULL;}}
    | source sourceItem {{$$ = createNode("source", $1, $2, "");}};

sourceItem: DEF funcSignature listStatement END {{$$ = createNode("sourceItem", $2, $3, "");}}

listSourceItem: sourceItem listSourceItem {{$$ = createNode("listSourceItem", $1, $2, "");}}
    | {{$$ = NULL;}};



/* FuncSignature */

funcSignature: IDENTIFIER LPAREN listArgDef RPAREN optionalTypeRef {{$$ = createNode("funcSignature", $3, $5, $1->value);}};

listArgDef:  {{$$ = NULL;}}
    | argDef {{$$ = $1;}}
    | argDef COMMA listArgDef {{$$ = createNode("listArgDef", $1, $3, "");}};

argDef: IDENTIFIER optionalTypeRef {{$$ = createNode("argDef", $1, $2, "");}};

optionalTypeRef: {{ $$ = NULL; }}
    | LPAREN OF typeRef RPAREN {{$$ = $3;}};



/* TypeRef */

typeRef: builtin {{$$ = $1;}}
    | custom {{$$ = $1;}}
    | array {{$$ = $1;}};

builtin: TYPEDEF {{$$ = $1;}};



/* Statement */

statement: var {{$$ =  $1;}}
    | if {{$$ =  $1;}}
    | loop {{$$ =  $1;}}
    | repeat {{$$ =  $1;}}
    | block {{$$ =  $1;}}
    | break {{$$ =  $1;}}
    | expression {{$$ =  $1;}};

listStatement: statement listStatement {{$$ = createNode("listStatement", $1, $2, "");}}
    | {{$$ = NULL;}};


custom: IDENTIFIER {{$$ = $1;}};

array: typeRef ARRAY LBRACKET DEC RBRACKET {{$$ = createNode("array", $1, NULL, $4->value);}};



/* IF ELSE */

if: IF expr THAN statement optionalElseStatement {{$$ = createNode("if", $3, createNode("ifStatements", $4, $5, ""), "");}};

optionalElseStatement: ELSE statement optionalElseStatement {{$$ = createNode("else", $2, $3, "");}}
    | ELSE statement {{$$ = createNode("else", $2, NULL, "");}}
    | {{$$ = NULL;}};



block: LBRACE listStatement RBRACE {{$$ = createNode("block", $2, NULL, "");}}
    | BEGIN_BLOCK listStatement END {{$$ = createNode("block", $2, NULL, "");}}
    | LBRACE listSourceItem RBRACE {{$$ = createNode("block", $2, NULL, "");}}
    | BEGIN_BLOCK listSourceItem END {{$$ = createNode("block", $2, NULL, "");}}
    | LBRACE RBRACE {{$$ = createNode("block", NULL, NULL, "");}}
    | BEGIN_BLOCK END {{$$ = createNode("block", NULL, NULL, "");}};

loop: WHILE expr listStatement END {{$$ = createNode("loop", $2, $3, "");}}
    | UNTIL expr listStatement END {{$$ = createNode("loop", $2, $3, "");}};

repeat: statement WHILE expr SEMICOLON {{$$ = createNode("loop", $3, $2, "");}}
    | statement UNTIL expr SEMICOLON {{$$ = createNode("loop", $3, $2, "");}};

break: BREAK SEMICOLON {{$$ = createNode("break", NULL, NULL, "");}};

expression: expr SEMICOLON {{$$ = $1;}};

assignment: expr EQUAL expr {{$$ = createNode("assigment", $1, $3, "");}};

expr: unary    {{$$ = $1;}}
    | binary   {{$$ = $1;}}
    | braces   {{$$ = $1;}}
    | call     {{$$ = $1;}}
    | slice  {{$$ = $1;}}
    | place    {{$$ = $1;}}
    | literal  {{$$ = $1;}};

binary: assignment {{$$ = $1;}}
    | expr PLUS expr {{$$ = createNode("PLUS", $1, $3, "");}}
    | expr MINUS expr {{$$ = createNode("MINUS", $1, $3, "");}}
    | expr STAR expr {{$$ = createNode("STAR", $1, $3, "");}}
    | expr SLASH expr {{$$ = createNode("SLASH", $1, $3, "");}}
    | expr PERCENT expr {{$$ = createNode("PERCENT", $1, $3, "");}}
    | expr EQUAL EQUAL expr {{$$ = createNode("EQUALITY", $1, $4, "");}}
    | expr NOTEQUAL expr {{$$ = createNode("NOTEQUAL", $1, $3, "");}}
    | expr LESSTHAN expr {{$$ = createNode("LESSTHAN", $1, $3, "");}}
    | expr GREATERTHAN expr {{$$ = createNode("GREATERTHAN", $1, $3, "");}}
    | expr LESSTHANEQ expr {{$$ = createNode("LESSTHANEQ", $1, $3, "");}}
    | expr GREATERTHANEQ expr {{$$ = createNode("GREATERTHANEQ", $1, $3, "");}}
    | expr AND expr {{$$ = createNode("AND", $1, $3, "");}}
    | expr OR expr {{$$ = createNode("OR", $1, $3, "");}};

unary: PLUS expr {{$$ = createNode("PLUS", $2, NULL, "");}}
    | MINUS expr {{$$ = createNode("MINUS", $2, NULL, "");}}
    | NOT expr {{$$ = createNode("NOT", $2, NULL, "");}};

braces: LPAREN expr RPAREN  {{$$ = createNode("braces", $2, NULL, "");}};

call: IDENTIFIER LPAREN optionalListExpr RPAREN  {{$$ = createNode("CALL", $1, $3, "");}};

optionalListExpr: listExpr  {{$$ = createNode("optionalListExpr", $1, NULL, "");}}
    | {{$$ = createNode("optionalListExpr", NULL, NULL, "");}};

listExpr: expr COMMA listExpr {{$$ = createNode("listExpr", $1, $3, "");}}
    | expr {{$$ = createNode("listExpr", $1, NULL, "");}};

slice: expr LBRACKET listRange RBRACKET {{$$ = createNode("slice", $1, $3, "");}};

range: expr DOUBLE_DOT expr {{$$ = createNode("range", $1, $3, "");}}
    | expr {{$$ = createNode("range", $1, NULL, "");}};

listRange: range COMMA listRange {{$$ = createNode("listRange", $1, $3, "");}}
    | range {{$$ = createNode("listExpr", $1, NULL, "");}};

place: IDENTIFIER {{$$ = $1;}};

literal: TRUE {{$$ = $1;}}
    | FALSE {{$$ = $1;}}
    | STR {{$$ = $1;}}
    | CHAR {{$$ = $1;}}
    | HEX {{$$ = $1;}}
    | BIN {{$$ = $1;}}
    | DEC {{$$ = $1;}};



/* VAR */

listVarDeclared: listVarDeclaredItem COMMA listVarDeclared {{$$ = createNode("listVarDeclared", $1, $3, "");}}
    | listVarDeclaredItem {{$$ = createNode("listVarDeclared", $1, NULL, "");}};

listVarDeclaredItem: IDENTIFIER {{$$ = $1;}}
    | assignment {{$$ = $1;}};

var: typeRef listVarDeclared SEMICOLON {{$$ = createNode("var", $1, $2, "");}};
%%