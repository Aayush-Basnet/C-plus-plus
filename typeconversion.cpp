//Type conversion
/*
Type conversion is the process of converting one data type to another. C++ provides two types of type conversion
1. Implicite Conversion
2. Explicit Conversion
*/

#include<iostream>
using namespace std;

int main(){
	// Implicite conversion
	int a=4;
	double b=5;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	
	//explicit conversion
	double c=3.25;
	int d= static_cast<int>(c);
	cout<<"c= "<<c<<endl;
	cout<<"d= "<<d<<endl;
	
	return 0;
}
