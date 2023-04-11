//Inline Function
#include<iostream>
using namespace std;

inline int maximum(int a,int b){
	
	return (a>b)? a:b;
}
int main(){
	
	cout<<"Maximum(5,10): "<<maximum(5,10)<<endl;
	cout<<"Maximum(1000,100): "<<maximum(1000,100)<<endl;
	
	return 0;
}
