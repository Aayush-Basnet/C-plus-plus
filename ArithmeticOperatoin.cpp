//WAP that asks an arithmetic operator and performs the corresponding operation on the operand
#include<iostream>
using namespace std;
int main(){
 float n1,n2;
 float sum,sub,mul,div;
cout<<"Enter any two number: "<<endl;
cin>>n1>>n2;

sum=n1+n2;
sub=n1-n2;
mul=n1*n2;
div=n1/n2;

cout<<"Total sum is "<<sum<<endl;
cout<<"Total sub is "<<sub<<endl;
cout<<"Total mul is "<<mul<<endl;
cout<<"Total div is "<<div<<endl;
//cout<<"Total mod is "<<mod<<endl;

return 0;
}
