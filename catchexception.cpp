#include<iostream>
using namespace std;
 void func(int a){
 	try{
 		if(a==0) throw 23.33;
 		if(a==1) throw 'A';
 		if (a==2) throw 5;
	 }
	 catch(...){
	 	cout<<"Caught Expression"<<endl;
	 }
 }
 int main(){
 	func(0);
 	func(1);
 	func(2);
 	return 0;
 }
