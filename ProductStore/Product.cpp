#include "Product.h"
#include<iostream>
#include<string.h>
using namespace std;

Product::Product(int id,string pname,double price)
{
	this->id=id;
	this->pname=pname;
	this->price=price;
}
void Product::setID(int id){
	this->id=id;
}
void Product::setPname(string pname){
	this->pname=pname;
}

void Product::setPrice(double price){
	this->price=price;
}

int Product::getID(){
	return this->id;
}
string Product::getPname(){
	return this->pname;
}

double Product::getPrice(){
	return this->price;
}


