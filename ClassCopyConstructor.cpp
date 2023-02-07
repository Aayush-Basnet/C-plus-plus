#include<iostream>
using namespace std;
class A{
	public:
		int x;
		A(int a){	//parameterzed constructor
			x=a;
		}
		
		A(A &i){	// copy constructor
			x=i.x;
		}
};
int main(){
	//Calling the parameterized constructor
	A a1(20);
	//calling the copy constructor
	A a2(a1);
	
	cout<<a2.x;
	
	return 0;
}
