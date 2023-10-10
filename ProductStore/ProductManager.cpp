#include "ProductManager.h"
#include "global.h"

bool ProductManager::insertion(Product P)
{
	bool status=false;
	PA.push_back(P);
	status=true;
	return status; 
}
bool ProductManager::deleteall()
{
	bool status=false;
	PA.clear();
	status=true;
	return status;
}
bool ProductManager::updation(int lid,Product P)
{
	for(int iCnt = 0; iCnt < PA.size();iCnt++)
	{
		if(PA[iCnt].getID()== lid)
		{
			PA[iCnt] = P;
			break;
		}
	}
	return true;
}

bool ProductManager::deletion(int lid)
{
	for(int iCnt = 0;iCnt < PA.size();iCnt++)
	{
		if(PA[iCnt].getID() == lid)
		{
			PA.erase(iCnt);
		}
	}
}
bool ProductManager::getById(int lid)
{
	for(int iCnt = 0; iCnt < PA.size();iCnt++)
	{
		if(PA[iCnt].getID() == lid)
		{
			cout<<PA[iCnt].getID()<<endl;
			cout<<PA[iCnt].getPname()<<endl;
			cout<<PA[iCnt].getPrice()<<endl;
			break;
		}
	}
}


