#ifndef PRODUCTMANAGER_H
#define PRODUCTMANAGER_H
#include<vector>
#include"Product.h"
#include "global.h"

using namespace std;

class ProductManager
{	public:
		ProductManager();
		static bool insertion(Product P);
		static bool deletion(int ID);
		static bool updation(int ID,Product P);
		static bool getById(int ID);
		static bool deleteall();
		static bool getall();
		~ProductManager();
};

#endif
