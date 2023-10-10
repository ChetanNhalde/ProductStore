#ifndef PRODUCT_H
#define PRODUCT_H
#include<string.h>
#include<iostream>
using namespace std;

class Product
{
	int id;
	string pname;
	double price;
	int quantity;
	public:
		Product(int id,string pname,double price);
		void setID(int id);
		void setPname(string pname);
		void setPrice(double price);
		int getID();
		string getPname();
		double getPrice();
		
		~Product();
	protected:
};

#endif
