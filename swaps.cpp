#include<iostream>
using namespace std;
template<class T>
void swaps(T &a,T &b){
	T temp =a;
	a=b;
	b=temp;
	
}
int main(){
	int x1=5, y1=9;
	float x2=3.5, y2= 6.5;
	cout<<"Before Swap: "<<endl;
	cout<<"x1= "<<x1<<" and y1= "<<y1<<endl;
	cout<<"x2= "<<x2<<" and y2= "<<y2<<endl;
	swaps(x1,y1);
	swaps(x2,y2);
	cout<<"After Swap: "<<endl;
	cout<<"x1= "<<x1<<" and y1= "<<y1<<endl;
	cout<<"x2= "<<x2<<" and y2= "<<y2<<endl;
	
	return 0;
}
