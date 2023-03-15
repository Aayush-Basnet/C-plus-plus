#include<iostream>
using namespace std;
class B{
	public:
		B(int a){
			cout<<"This is base class"<<endl;
		}
};
class D: public B{
	public:
		D(int a):B(a){
			cout<<"This is derived class"<<endl;
		}
};
int main(){
	D d1(1);
	
	return 0;
}
