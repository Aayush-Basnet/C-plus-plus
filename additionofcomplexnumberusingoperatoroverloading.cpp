//Write a program to compute addition/subtraction of two complex numbers using operator overloading.

#include<iostream>
using namespace std;
class complex{
	private:
		int real,image;
		public:
		void readcomplexnumber(){
			cout<<"Enter real number: ";
			cin>>real;
			cout<<"Enter imaginary number: ";
			cin>>image;
		}
		void showcomplexnumber(){
			cout<<" "<<real<<" +j"<<image<<endl;
		}
		complex operator+(complex c){
			complex temp;
			temp.real= real+c.real;
			temp.image= image+c.image;
			return temp;		}
};
int main(){
	complex c1,c2,c3;
	cout<<"Enter first number"<<endl;
    c1.readcomplexnumber();
    cout<<"Enter second number: "<<endl;
    c2.readcomplexnumber();
    c3=c1+c2;
    cout<<"The sum is ";
    c3.showcomplexnumber();
	
	return 0;
}
