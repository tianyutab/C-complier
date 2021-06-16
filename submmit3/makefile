ast.cpp:ast.c
	cp ast.c ast.cpp
code.cpp:code.c
	cp code.c code.cpp
exp.cpp:exp.c
	cp exp.c exp.cpp
lex.yy.cpp:lex.l
	flex lex.l
	cp lex.yy.c lex.yy.cpp
objectCode.cpp:objectCode.c
	cp objectCode.c objectCode.cpp
parser.tab.cpp:parser.y
	bison parser.y -d
	cp parser.tab.c parser.tab.cpp
semantic_case.cpp:semantic_case.c
	cp semantic_case.c semantic_case.cpp
semantic.cpp:semantic.c
	cp semantic.c semantic.cpp
parser:ast.cpp code.cpp exp.cpp lex.yy.cpp objectCode.cpp parser.tab.cpp semantic.cpp semantic_case.cpp
	g++ -o parser ast.cpp code.cpp exp.cpp lex.yy.cpp objectCode.cpp parser.tab.cpp semantic.cpp semantic_case.cpp