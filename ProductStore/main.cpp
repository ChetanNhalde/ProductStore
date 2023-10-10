#include <iostream>
#include<string.h>
#include "Product.h"
#include "ProductManager.h"
#include "global.h"
#include<vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int id,choice;
	string name;
	double price;
	while(1)
	{
		cout<<"1.insetData \n2.updateData \n3.deleteData \n4.getByid "<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				{
					cout<<"enter id :"<<endl;
					cin>>id;
					cout<<"enter name :"<<endl;
					cin>>name;
					cout<<"Enter price :"<<endl;
 					cin>>price;
					
					bool status = ProductManager::insertion(Product(id,name,price));
					if(status)
					{
						cout<<"Data inserted successfully "<<endl;
					}
					
					break;
				}
			case 2:
			 	{
			 		cout<<"Enter Exising id , Enter name ,Enter Price "<<endl;
			 		cin>>id;
			 		cin>>name;
			 		cin>>price;
			 		
			 		bool status = ProductManager::updation(id,Product(id,name,price));
			 		if(status)
			 		{
			 			cout<<"Data Updated Successfully "<<endl;
					 }
			 		break;
				 }
				 
			case 3 : 
			{
				cout<<"Enter id of item to be deleted "<<endl;
				cin>>id;
				
				bool status = ProductManager::deletion(id);
				if(status)
				{
					cout<<"Data Deleted Successfully "<<endl;
				}
				break;
			}
			
			case 4 :
				{
					cout<<"Enter id "<<endl;
					cin>>id;
					
					ProductManager::getById(id);
					break;
				}
			case 5:
				{
					ProductManager::deleteall();
				}	
			default : 
				cout<<"Enter valid choice "<<endl;
				break;
	}
}
	return 0;
}

