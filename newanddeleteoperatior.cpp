// new and delete operator
#include<iostream>
using namespace std;
int main(){
	// Allocate memory for a new integer object
	int *p= new int;
	
	//Initialize the object with a value
	*p=20;
	//use of object
	cout<<"value : "<<*p<<endl;
	cout<<"value: "<<p<<endl;
	
	// dellocate the memory
	delete p;
	
	
	return 0;
}
