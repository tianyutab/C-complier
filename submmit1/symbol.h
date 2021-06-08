#include<iostream>
#include<map>
#include<cstring>
#include"Tag.h"
using namespace std;

class Token{
private:
public:
    int Tag;
    bool operator==(Token& b){return Tag==b.Tag?true:false;}
    Token(int t):Tag(t){}
    Token(Token& tt):Tag(tt.Tag){}
    Token(const Token& tt):Tag(tt.Tag){}
    
    ~Token(){}
    //for the root of list
};
const Token tokenId(ID);
const Token tokenNum(NUM);

class Num:public Token{
private:
    int value;
    public:
    Num(int v):Token(NUM),value(v){}
    Num(Num& num):Token(num.Tag){value = num.GetValue();}
    int GetValue(){return value;}
    bool operator==(Num& b){return value==b.GetValue()?true:false;}
};
//保留字
class Word:public Token{
    private:
    string lexeme;
    public:
    Word(int t,string lexeme):Token(t),lexeme(lexeme){}
    Word(Word& word):Token(word.Tag){lexeme = word.getWord();}
    string getWord()const {return lexeme;}
    ~Word(){}

};
class Id:public Token{
    private:
    string id_text;
    public:

    Id(string id_text):Token(ID),id_text(id_text){}
    Id(Id& id):Token(id.Tag){id_text = id.GetString();}
    string GetString(){return id_text;}
    bool operator==(Id& b){
        return this->id_text==b.GetString()?true:false;
    }
};
//创建符号表
class Env{
    private:
    //std::hash_map<int,string> table;
    
    Id* id;

    Num* num;
    public:
    Env *next = NULL;
    friend class EnvList;
    Env(Token t,int v){
        num = new Num(v);
        next = NULL;
        id = NULL;
       
    }
    Env(Token t,char* s){
        if(t.Tag == ID)
        {
            id = new Id((string)s);
            num = NULL;
          
        }
        // else{
        //     word = new Word(t.Tag,(string)s);
        //     id = NULL;
        //     num = NULL;
        // }
        next=NULL;
    }
    Env(Env& symbol)
    {//id,word,num.next,token
        if(symbol.id!=NULL)
            id = new Id(*(symbol.id));
        else if(symbol.num!=NULL)
            num = new Num(*(symbol.num));
        // else if(symbol.word!=NULL)
        //     word = new Word(*(symbol.word));

    }
    bool isId(){return id!=NULL?true:false;}
    bool isNum(){return num!=NULL?true:false;}
    Id& GetId(){return *id;}
    Num& GetNum(){return *num;}
    ~Env(){
        if(id!=NULL)
        delete id;
        // if(word!=NULL)
        // delete word;
        if(num!=NULL)
        delete num;
    }
};

class Envlist{
    private:
        Env *root_id;
        Env *root_num;
    public:
    Envlist(){ 
        char s[10] = "nihao";
        root_id = new Env(tokenId,s);
        root_num = new Env(tokenNum,0);
    }
    Envlist(Envlist& ee){
        root_id = ee.GetRootId();
        root_num = ee.GetRootNum();
    }
    Env *GetRootId(){return root_id;}
    Env *GetRootNum(){return root_num;}
    void put(Env& symbol);
    //先找到token相同,只存token为ID和NUM的符号,需在调用之前进行判断
    bool check(Env& symbol);
    void get(Env& symbol,Env *&addr);
    // ~EnvList()
    // {
    //     Env *p = GetRootId->next;
    //     while(p->next!=NULL)
    //     {
    //         p = p->next;
    //         delete 
    //     }

    // }
};


void Envlist::put(Env& symbol)
{

        if(symbol.isId()){
            Env *temp = root_id;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            Env *tempEnv = new Env(symbol);
            temp->next= tempEnv;
            //cout<<"输出一个地址："<<tempEnv<<endl;
        }
        else if(symbol.isNum())
        {
            Env *temp = root_num;
            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            Env *tempEnv = new Env(symbol);
            temp->next= tempEnv;
        }
        
};

bool Envlist::check(Env& symbol)
{
    if(symbol.isId())
    {
        Env *temp = root_id->next;
        while(temp!=NULL)
        {
            if(temp->GetId()==symbol.GetId())
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    else if(symbol.isNum())
    {
        Env *temp = root_num->next;
        while(temp!=NULL)
        {
            if(temp->GetNum()==symbol.GetNum())
            {
                return true;
            }
            temp = temp->next;
            
        }
        return false;
    }
    else
        return false;
return false;
}


void Envlist::get(Env& symbol,Env *&addr){
    if(symbol.isId())
    {   
        Env *temp = root_id->next;
        while(temp!=NULL)
        {
            if(temp->GetId()==symbol.GetId()){
                //cout<<"输出一个地址："<<temp<<endl;
                addr = temp;
                return;
            }
            temp = temp->next;
        }
    }
    else if(symbol.isNum())
    {
        Env *temp = root_num->next;
        while(temp!=NULL)
        {
            if(temp->GetNum()==symbol.GetNum())
            {

                addr = temp;
                return;
            }
            temp = temp->next;
            
        }
    }
}