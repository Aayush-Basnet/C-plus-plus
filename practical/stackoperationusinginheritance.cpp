/*
Implement the stack operation using the inheritance. Define stack class and use necessary 
constructor for initialization of stack and push(), pop() operation and check necessary 
underflow/overflow condition in derived class.
*/
#include<iostream>
using namespace std;
const int max_size =10;

class Stack{
	protected:
		int top;
		int arr[max_size];
		
	public:
		Stack(){
			top=-1;
		}
		
	void push(int val){
		if(top==max_size-1){
			cout<<"Stack Overflow!"<<endl;
		}else{
			top++;
			arr[top]=val;
		}
	}
	int pop(){
		if(top==-1){
			cout<<"Stack Underflow!"<<endl;
			return -1;
		}else{
			int val=arr[top];
			top--;
			return val;
		}
	}
	
	void display(){
		if(top==-1){
			cout<<"Stack is empty!"<<endl;
		}else{
			cout<<"Stack elements: ";
			for(int i=top;i>=0;i--){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
	}
};
class DerivedStack:public Stack{
	public:
		DerivedStack():Stack(){
		}
		
	void push(int val){
		if(top==max_size-1){
			cout<<"Stack Overflow!"<<endl;
			
		}else{
			top++;
			arr[top]=val*2;
		}
	}
	
	int pop(){
		if(top==-1){
			cout<<"Stack Underflow!"<<endl;
			return -1;
		}else{
			int val=arr[top]/2;
			top--;
			return val;
		}
	}
};
int main(){
	DerivedStack dstack;
	dstack.push(10);
	dstack.push(20);
	dstack.push(30);
	dstack.display();
	
	int val=dstack.pop();
	if(val!=-1){
		cout<<"Popped value: "<<val<<endl;
	}
	dstack.display();
	
	val=dstack.pop();
	if(val!=-1){
		cout<<"Popped value: "<<val<<endl;
	}
	dstack.display();
	
	val=dstack.pop();
	if(val!=-1){
		cout<<"Popped value: "<<val<<endl;
	}
	dstack.display();
	
	val=dstack.pop();
	if(val!=-1){
		cout<<"Popped value: "<<val<<endl;
	}
	dstack.display();
	
	
	
	return 0;
}
/*
Output
Stack elements: 60 40 20
Popped value: 30
Stack elements: 40 20
Popped value: 20
Stack elements: 20
Popped value: 10
Stack is empty!
Stack Underflow!
Stack is empty!

*/
