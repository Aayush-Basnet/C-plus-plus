// passing a function pointer as a parameter
#include<iostream>
using namespace std;
void myfun(int x){
	cout<<"myfun is called"<<x<<endl;
}
void callfun(void (*funcPtr)(int),int x){
	funcPtr(x);
}
int main(){
	callfun(myfun,5);
	return 0;
}
