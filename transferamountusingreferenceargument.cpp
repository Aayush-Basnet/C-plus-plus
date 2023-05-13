/*
Define a class Account and use overloaded constructors without an with one, two argument. 
Use methods get() and show() to input necessary data and to show. Write a member function 
for transfer amount from one account to another using reference argument.
*/

#include<iostream>
#include<string>
using namespace std;

class Account{
	private:
		string accNum;
		string accName;
		double balance=0;
		
	public:
		//constructor with one argument
		Account(string num){
			accNum=num;
			accName=" ";
			
		}
		//constructor with two argument	
	Account(string num,string name){
		accNum=num;
		accName=name;
		
	}
	//method to get input for account details
	void get(){
		cout<<"Enter account number: ";
		cin>>accNum;
		cout<<"Enter account holder name: ";
		cin>>accName;
		cout<<"Enter initial balance: ";
		cin>>balance;
	}
	//method to display account details	
void show(){
	cout<<"Account Number: "<<accNum<<endl;
	cout<<"Account Holder Name: "<<accName<<endl;
	cout<<"Current balance: "<<balance<<endl;
}
// method to transger amount from account to another
void transfer(Account& other, double amount){
	if(balance>=amount){
		balance-=amount;
		other.balance+=amount;
		cout<<amount<<" has been transferred from account "<<accNum<<" to account "<<other.accNum<<endl;
		
	}else{
		cout<<"Insufficient balance in "<<accNum<<endl;
	}
}

};
int main(){
	Account a1(" "," ");
	Account a2(" "," ");
	
	cout<<"Account 1 details: "<<endl;
	a1.get();
	cout<<endl;
	cout<<"Account 2 details: "<<endl;
	a2.get();
	cout<<endl;
	a1.transfer(a2,500.0);
	cout<<endl;
	cout<<"Updated account 1 details: "<<endl;
	a1.show();
	cout<<endl;
	cout<<"Updated account 2 details: "<<endl;
	a2.show();
	cout<<endl;
	return 0;
}
/*
Output
Account 1 details:
Enter account number: 12856748253
Enter account holder name: Arjun
Enter initial balance: 5000

Account 2 details:
Enter account number: 15676430286
Enter account holder name: Chris
Enter initial balance: 20000

500 has been transferred from account 12856748253 to account 15676430286

Updated account 1 details:
Account Number: 12856748253
Account Holder Name: Arjun
Current balance: 4500

Updated account 2 details:
Account Number: 15676430286
Account Holder Name: Chris
Current balance: 20500



*/
