CPP = g++
LEX = flex
YACC = bison
lex.yy.cpp:lex.l
	$(LEX) lex.l
	cp lex.yy.c lex.yy.cpp
yacc.yab.cpp:yacc.y
	$(YACC) yacc.y -d
	cp yacc.tab.c yacc.tab.cpp
a.out:gramtree.cpp symbol.cpp lex.yy.cpp yacc.tab.cpp
	$(CPP) gramtree.cpp symbol.cpp lex.yy.cpp yacc.tab.cpp