// Write a program to add two object of distance class with data members feet and inch by using member function and friend function

#include<iostream>
using namespace std;
class Distance{
	private:
		int inch,feet;
		
		public:
			void readDistance(){
				cout<<"Enter inch: ";
				cin>>inch;
				cout<<"Enter feet: ";
				cin>>feet;
			
			}
	
	void showDistance(){
		cout<<" "<<inch<<" "<<feet<<endl;
	}
	friend Distance operator+(Distance,Distance);
	
};
Distance operator+(Distance d1,Distance d2){
	Distance temp;
	temp.inch= d1.inch+d2.inch;
	temp.feet= d1.feet+d2.feet+(temp.inch/12);
	temp.inch= temp.inch%12;
	return temp;
}

int main(){
	Distance d1,d2,d3;
	
	cout<<"Enter first distance: "<<endl;
	d1.readDistance();
	cout<<"Enter second distance: "<<endl;
	d2.readDistance();
	d3=d1+d2;
	cout<<"The sum is "<<endl;
	d3.showDistance();
	
	
	return 0;
}
