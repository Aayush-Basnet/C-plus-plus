//WAP to check the greatest number among three inputs taken from the user
#include<iostream>
using namespace std;
int main(){
int n1,n2,n3;
cout<<"Enter three numbers: "<<endl;
cin>>n1>>n2>>n3;

if(n1>n2 && n1>n3){
    cout<<n1<<" is greatest among "<<n2<<" and "<<n3<<endl;
}else if(n2>n1 && n2>n3){
cout<<n2<<" is greatest among "<<n1<<" and "<<n3<<endl;
}else{
cout<<n3<<" is greatest"<<endl;
}


return 0;
}
