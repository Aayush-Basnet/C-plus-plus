// ambiguity in multiple inheritance
#include<iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"class A";
		}
	
	
};
class B{
	public:
		void show(){
			cout<<"class B";
		}
};
class c: public A, public B{

}; 
int main(){
	c c1;
//	c1.show(); // ambigious occur
	c1.A:: show();
	c1.B :: show();
	
	return 0;
}
