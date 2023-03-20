// function template
#include<iostream>
using namespace std;
template<class X>
X func(X a,X b){
	return a;
}
int main(){
	cout<<func(15,8)<<endl;
	cout<<func(7.4,9.3);
	
	return 0;
}
