/* function overloading
Function overloading is tha ability of a programming language to allow multiple function with same name but with different signature.
When function name is overloadded with different jobs, it is called function overloading.
In function overloading, "Function" name should be same and the arguments should be different
*/
#include<iostream>
using namespace std;

int sum(int a, int b){
	cout<<"Sum: "<<(a+b)<<endl;
}

int sum(double a, double b){
	cout<<"Sum: "<<(a+b)<<endl;
}

int main(){
	
	sum(10,5);
	sum(10.5,4.5);
	
	return 0;
}
