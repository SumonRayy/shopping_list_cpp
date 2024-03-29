//========================== Processing a Shopping List : in C++ =========================//
//========================== A Program written by @SumonRayy ===========================//

#include<iostream>

using namespace std;


class ITEMS 
{
	int itemcode[50];
	float itemPrice[50];
	int count;
  public:
    void CNT(void){count = 0;}
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};
//=====================================================================

void ITEMS :: getitem(void)

{
	cout<<"Enter item Code : ";
	cin>>itemcode[count];
	cout<<"Enter item Price : ";
	cin>>itemPrice[count];
	cout<<"\n============== ITEM ADDED SUCCESSFULLY ============\n";
	count++;
}

void ITEMS :: displaySum(void)
{
	float sum=0;
	for(int i=0; i<count ; i++)
		sum=sum+itemPrice[i];
	cout<<"\nTotal value :"<<sum<<"\n===========================================\n";
}

void ITEMS :: remove(void)
{
	int a;
	cout<<"Enter item code : ";
	cin>>a;
	
	for(int i=0; i<count; i++)
	{
		if(itemcode[i]==a)
			itemPrice[i]=0;
	}
	cout<<"\n============== ITEM DELETED SUCCESSFULY ==============\n";
}

void ITEMS :: displayItems(void)
{
	cout<<"\nCode	Price\n";
	
	for(int i=0; i<count; i++)
	{
		cout<<"\n"<<itemcode[i];
		cout<<"     "<<itemPrice[i];
	}
	cout<<"\n===========================================\n";
	
}

//=================================================================================

int main()
{
	ITEMS order;
	order.CNT();
	int x;
	
	do 
	{
		cout<<"\nYou can do the following ;"<<"\nEnter appropriate number :-\n";
		cout<<"\n1 : Add an item.";
		cout<<"\n2 : Display total value.";
		cout<<"\n3 : Delete an item.";
		cout<<"\n4 : Display all items.";
		cout<<"\n5 : Quit.";
		
		cout<<"\n\nWhat is your option?\nEnter : ";
		
		cin>>x;
		
		switch(x)
		{
			case 1 : order.getitem();break;
			case 2 : order.displaySum();break;
			case 3 : order.remove();break;
			case 4 : order.displayItems();break;
			case 5 : break;
			default: cout<<"Error in Input; try again : \n===========xxxxxxxxxxxxxxxxxxxxxxxxxx============\n";
		}
	}while(x !=5);
	
	return 0;
	
}

//========================================== THE END =======================================//
