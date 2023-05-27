/*
write a program overloading a relational operator <= which in turn can be used for 
the user defined objects for a class distance to compare the two distance objects.
*/
#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		int inches;
	public:
		Distance(int f=0 ,int i=0){
			feet =f;
			inches=i;
		}
		
	bool operator<=(Distance d2){
		int inches1=feet*12+inches;
		int inches2=d2.feet*12+d2.inches;
		return inches1<=inches2;
	}
	void display(){
		cout<<feet<<"feet, "<<inches<<" inches"<<endl;
	}
	
};
int main(){
	Distance d1(5,6);
	Distance d2(4,8);
	
	cout<<"Distance 1: ";
	d1.display();
	cout<<"Distance 2: ";
	d2.display();
	
	if(d1<=d2){
		cout<<"Distance 1 is less than or equal to Distance 2"<<endl;
	}else{
		cout<<"Distance 1 is greater than Distance 2"<<endl;
	}
	return 0;
}

/*
Output
Distance 1: 5feet, 6 inches
Distance 2: 4feet, 8 inches
Distance 1 is greater than Distance 2
*/
