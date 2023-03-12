#include<iostream>
using namespace std;
int sum(int a,int b=10, int c=15);
int main(){
	
	cout<<sum(10)<<endl;
	cout<<sum(5,15)<<endl;
	cout<<sum(5,10,15)<<endl;
	
	return 0;
}
int sum(int a,int b,int c){
	
	return (a+b+c);
}
