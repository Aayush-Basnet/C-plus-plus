#include<iostream>
using namespace std;
class Account{
	private:
		int acc_no;
		double balance;
	static	double min_balance;
		
		public:
			void readdata(){
				cout<<"Enter Account Number: ";
				cin>>acc_no;
				cout<<"Enter balance: ";
				cin>>balance;
			}
			void displaydata(){
				cout<<"Account Number: "<<acc_no<<endl;
				cout<<"Balance: "<<balance<<endl;
			}
	static void display_min_balance(){
		cout<<"minimun balance: "<<min_balance<<endl;
		
	}
};

double Account :: min_balance = 1000;

int main(){
const int max_account =5;
Account accounts[max_account];
	
	for(int i=0;i<max_account;i++){
		accounts[i].readdata();
	}
	cout<<endl;
	for(int i=0;i<max_account;i++){
		accounts[i].displaydata();
	}
	cout<<"Minimun balance for all accounts: "<<endl;
	Account::display_min_balance();
	return 0;
}
