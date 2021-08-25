#include<iostream>
using namespace std;
void showMenu()
{
	cout<<"\n########   MENU   ########";
	cout<<"\n1. Check Balance";
	cout<<"\n2.  Deposit";
	cout<<"\n3.  Withdraw";
	cout<<"\n4.  Exit";
	cout<<"\n########          ########";
}
int main(){
int option,balance=8000;


do{
	
showMenu();
cout<<"\nchose an option: ";
cin>>option;
system("cls");
switch(option)	
{
	case 1:
	cout<<"\nbalance= "<<balance;
	break;
	case 2:
		int deposit;
		cout<<"enter deposit amount ";
		cin>>deposit;
		balance=balance+deposit;
		break;
	case 3:
		int withdraw;
		cout<<"enter withdraw amount ";
		cin>>withdraw;
		if(balance>=withdraw)
		{
			balance=balance-withdraw;
		}
		else
		 cout<<"not enough money  ";
}

}while(option!=4);


return 0;
}

