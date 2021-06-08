%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include"Tag.h"
#include"symbol.h"

class Envlist;
Envlist symboltable{};
void MyOut(char* a,int length,int Tag);

extern FILE * yyin;
//extern YYSTYPE yylval;
extern int yylineno;
extern int yylex(void);
extern char* yytext;

int count = 0;
/*struct word {
  char *name;
  int Tag;
  struct word *next;
};

struct word *word_list;
struct word *tem;
extern void *malloc();

int state;

int add_word(int type, char *word);
int lookup_word(char* word);
*/

%}

/*正则定义，第91页,number排除了00.88的情况*/
delim          [ \t\n]
ws             {delim}+
letter         [A-Za-z]
digit          [0-9]
reservedwords  main|int|long|short|float|double|char|unsigned|signed|const|void|volatile|enum|struct|union|if|else|goto|switch|case|do|while|for|continue|break|return|default|typedef|auto|register|extern|static|sizeof
id             {letter}({letter}|{digit})* 
number         (\-)?(0|[1-9]{digit}*)(\.{digit}+)?(E[+-]?{digit}+)?

%%
{ws} {}
{reservedwords} {MyOut(yytext,yyleng,RESERVEDWORDS);}
{id} {MyOut(yytext,yyleng,ID);}
{number} {MyOut(yytext,yyleng,NUM);}
"("  {MyOut(yytext,yyleng,LP);}
")"  {MyOut(yytext,yyleng,RP);}
"{"  { MyOut(yytext,yyleng,LBRACE);}
"}"  { MyOut(yytext,yyleng,RBRACE);}
";"  { MyOut(yytext,yyleng,SEGEMENT);}
"="  { MyOut(yytext,yyleng,ASSIGN);}
"!" {MyOut(yytext,yyleng,NOT);}

%%
/*读完文件后执行yywrap,返回1表示程序工作完成*/
int yywrap()
{
    return 1;
}
int main()
{
/*扫描器的入口*/
    
    yylex();
    return 0;
}
/*按格式输出*/
void MyOut(char* a,int length,int Tag)
{
  switch(Tag){
    case RESERVEDWORDS:{
        char temp;
        for (int i = 0;i<length; i++) {
          if (yytext[i]) {
            if (yytext[i] >= 'a' && yytext[i] <= 'z') {
              temp = yytext[i] - 32;
            }
            else {
              temp = yytext[i];
            }
            printf("%c", temp);
          }
          
        }
        printf("\t\t\t\t%s\n", yytext);
    break;
    }
    case ID:{
      printf("ID\t\t\t\t%s",yytext);
      Token t = Token(ID);
      Env id(t,yytext);
      if(!symboltable.check(id))
      {
        symboltable.put(id);
      }
      Env *addr;
      symboltable.get(id,addr);
      std::cout<<"\t\t\t\t"<<(void *)addr<<"\n";
      
      break;
    }
    case NUM:{
      printf("NUMBER\t\t\t\t%s\n",yytext);
      break;
    }
    case LP:{
      printf("LP\t\t\t\t%s\n",yytext);
      break;
    }
    case RP:{
      printf("RP\t\t\t\t%s\n",yytext);
      break;
    }
    case LBRACE:{
      printf("LBRACE\t\t\t\t{\n");
      break;
    }
    case RBRACE:{
      printf("RBRACE\t\t\t\t}\n");
      break;
    }
    case SEGEMENT:{
      
      printf("SEGEMENT\t\t\t\t;\n");
      break;
    }
    case ASSIGN:{
      printf("ASSIGN\t\t\t\t=\n");
      break;
    }
    case NOT:{
      printf("NOT\t\t\t\t!\n");
      break;
    }
  }
  
}