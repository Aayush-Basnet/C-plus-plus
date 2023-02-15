#include<iostream>
using namespace std;
class Stack{
	int top;
	public:
		int a[5];
	Stack(){
		top = -1;
	}
	void push(int x){
		if(top<5){
		
		a[++top]=x;
		cout<<"Element Inserted\n";
	}else{
		throw "Stack is full. You cannot insert the item!!!";
		
	}
}
int pop(){
	if(top>=0){
		int d = a[top--];
		return d;
		
	}else{
		throw "Stack is empty. You cannot pop the item";
	}
}
};

int main(){
	int item;
	Stack s1;
	int ch=1;
	cout<<"\n 1. PUSH \n 2. POP \n 3.EXIT";
	cout<<"\nEnter your choice: ";
	cin>>ch;
	do{
		switch(ch){
			case 1:
				cout<<"\nEnter the item to push: ";
				cin>>item;
				try{
					s1.push(item);
				}
				catch(const char* e){
					cout<<e<<endl;
				}
				break;
			case 2:
				try{
					cout<<"\n Poped Item is: "<<s1.pop();
				}
				catch(const char* e){
					cout<<e<<endl;
				}
				break;
				case 3:
					exit(0);
		}
		cout<<"\nEnter your choice: ";
		cin>>ch;
	}while(ch<4);
	return 0;
}

