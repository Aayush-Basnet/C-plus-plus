#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class Bank{
	public:
		char name[20];
		char account_type[20];
		int account_number;
		int balance;
		
	void initialize(){
		cout<<"\nEnter Account Holder Name: ";
		cin>>name;
		cout<<"\nEnter Account type: ";
		cin>>account_type;
		cout<<"\nEnter Account Number: ";
		cin>>account_number;
		cout<<"\nEnte balance to deposite: ";
		cin>>balance;	
	}	
	
	void deposite(){
		int  bal;
		cout<<"\nEnter amount to deposite: ";
		cin>>bal;
		balance=balance+bal;
		cout<<"\nAmount deposited Successfully!!\n Your New Balance is "<<balance;
	}
	
	void withdraw(){
		int bal;
		cout<<"\nYour balance is "<<balance<<"\nEnter amount to withdrawn: ";
		cin>>bal;
		if(bal<=balance){
			balance=balance-bal;
			cout<<"\nYour new balance is "<<balance;
		}else{
			cout<<"Withdraw Fail";
		}	
	}
	
	void display(){
		cout<<"\nName: "<<name;
		cout<<"\nAccount Type: "<<account_type;
		cout<<"\nAccount No.: "<<account_number;
		cout<<"\nBalance: "<<balance;
	}
		
};
int main(){
	int i;
	char cont='y';
	Bank bk;
	bk.initialize();
	cout<<"\n1.Your Information\n2.Deposite\n3.Withdraw";
	
	
	if(cont=='y'){
	while(cont=='y'){
	cout<<"\nEnter your choice: ";
	cin>>i;
	switch(i){
	case 1:
		bk.display();
		break;
		case 2:
			bk.deposite();
			break;
			case 3:
				bk.withdraw();
				break;
				default:
					cout<<"\nInvalid Option";
}
cout<<"\nDo you want to continue? [Y/N]: ";
cin>>cont;

}
}else{
	cout<<"\nInvali Option";
}
	getch();
	
	return 0;
}
