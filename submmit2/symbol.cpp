#include <string>
#include <string.h>
#include<iostream>
#include <unordered_map>
#include <vector>
#include "./symbol.h"
#include "./gramtree.h"

//判断两个符号能不能计算，是否报错
bool canCalculate(ASTNode* a1,ASTNode* a3){
	bool flag1 = false;
	bool flag2 = false;
	if(a1->left->idname==NULL||
		(base.using_table->findSymbol(a1->left->idname)->getIdType()==symbolType::integer)){
			flag1 = true;//a
		}
	else if((base.using_table->findSymbol(a1->left->idname)->getIdType()==symbolType::Array)){
		if(a1->left->right==NULL)flag1 = false;//a
		else if(!strcmp(a1->left->right->name,"["))flag1 = true;//a[
	}
	else if((base.using_table->findSymbol(a1->left->idname)->getIdType()==symbolType::function)){
		if(a1->left->right==NULL)flag1 = false;//func
		else if(!strcmp(a1->left->right->name,"("))flag1 = true;//func(
	}else{}
	
	if(a3->left->idname==NULL||
		(base.using_table->findSymbol(a3->left->idname)->getIdType()==symbolType::integer)){
			flag2 = true;//b
		}
	else if((base.using_table->findSymbol(a3->left->idname)->getIdType()==symbolType::Array)){
		if(a3->left->right==NULL)flag1 = false;//b
		else if(!strcmp(a3->left->right->name,"["))flag2 = true;	//b[
	}
	else if((base.using_table->findSymbol(a3->left->idname)->getIdType()==symbolType::function)){
		if(a3->left->right==NULL)flag1 = false;//func1
		else if(!strcmp(a3->left->right->name,"("))flag2 = true;//func1(
	}else{}

	if(flag1&&flag2)return true;
	return false;
}



symbol *symbolTable::ifExist(std::string name){
    std::unordered_map<std::string, symbol *>::iterator i;
    i = this->symbolMap.find(name);
    if (i != this->symbolMap.end())
        return i->second;
    else
        return NULL;
}
int symbolTable::addSymbol(symbol *s){
    if (this->ifExist(s->getIdName()) == NULL)
    {
        this->symbolMap[s->getIdName()] = s;
        return 0;
    }
    else
        return -1;       
}
symbolTable::symbolTable(){
    this->isbase=0;
    this->symbolItemCount = 0;
    this->totalOffset = 4;
    this->tablelist.push_back(this);
    this->using_table=this;
}
symbolTable::symbolTable(symbolTable*s){
        s->totalOffset=this->totalOffset;
        s->symbolItemCount=this->symbolItemCount;
        s->isbase=this->isbase;
        s->parent=this->parent;
        s->symbolMap=this->symbolMap;
        s->tablelist=this->tablelist;
        s->using_table=this->using_table;
}
int symbolTable::addSymbol(std::string name,symbolType type){
    symbol *s =new symbol(name,type);
    s->setIndex(this->using_table->symbolItemCount++);
    s->setOffset(this->using_table->totalOffset);
    this->totalOffset+=OFFSET;

    return this->addSymbol(s);
};
int symbolTable::addArraySymbol(std::string name,int length){
    symbol *s =new symbol(name,symbolType::Array);
    s->setIndex(this->using_table->symbolItemCount++);
    s->setOffset(this->using_table->totalOffset);
	s->setLength(length);
    this->totalOffset+=length*4;
    return this->addSymbol(s);
}
symbolTable* symbolTable::createSon(){
    symbolTable *SST=new symbolTable();
	this->using_table->childNum++;
	SST->tableName = this->using_table->tableName + "_" + std::to_string(this->using_table->childNum);
	std::cout<<SST->tableName<<std::endl;
    SST->parent=this->using_table;
	if(funcflag==-1){
		SST->setTotalOffset(this->using_table->getTotalOffset());
	}
	funcflag=-1;
    SST->isbase=1;
    this->tablelist.push_back(SST);
    this->using_table=SST;
    return SST;
}
void symbolTable::deletetable(){
	int temp=this->using_table->getTotalOffset();
    this->tablelist.pop_back();
    this->using_table=tablelist.back();
	this->using_table->totalOffset+=temp;
}
symbol* symbolTable::findSymbol(std::string name){
    std::unordered_map<std::string, symbol *>::iterator i;
    i = this->symbolMap.find(name);
    if (i != this->symbolMap.end())
        return i->second;
    else if(this->isbase==0)return NULL;
    else
    return this->parent->findSymbol(name);
}

int symbolTable::addIntoTemp(std::string name,symbolType type){
    symbol *s =new symbol(name,type);
	for (auto val : this->templist)
        if (val->getIdName()== name)
            return -1;
    this->templist.push_back(s);
    return 0;

}
void symbolTable::addFromTemp(){
    int length=this->parent->templist.size();
	std::cout<<length;
    for (int i=1;i<=length;i++)
    {
        this->addSymbol(this->parent->templist.back()->getIdName(),this->parent->templist.back()->getIdType());
        this->parent->templist.pop_back();
    }

};
int symbolTable::getTotalOffset(){
	return this->totalOffset;
};

void symbolTable::setTotalOffset(int totalOffset){
	this->totalOffset = totalOffset;
}

const char* mystrcat(std::string parentName,int num)
{
	std::string a= parentName + "_" + std::to_string(num);
	const char* p =a.data();
	return p;
}
const char* toCharStar(std::string parentName)
{
	std::string a= parentName;
	const char* p =a.data();
	return p;
}
symbolTable base;
int funcflag=-1;
int forflag=-1;
FILE *fp = fopen("output.asm","a+");
symbol*print_int;

