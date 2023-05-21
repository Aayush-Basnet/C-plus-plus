/*
Write a program that converts objects of one class to object in to another class. 
Assume one class is to be Degree and another to be radian.
*/

#include<iostream>
#include<cmath>
using namespace std;
class Degree{
	private:
	 double degree;
	
	public:
		Degree(double d=0){
			degree=d;
		}
		
	void showdegree(){
		cout<<degree<<" degrees"<<endl;
	}
	double getdegree(){
		return degree;
	}
};
class Radian{
	private:
		double radian;
		
	public:
		Radian(double r=0){
			radian=r;
		}
		
	void showradian(){
		cout<<radian<<" radians"<<endl;
	}
	double getradian(){
		return radian;
	}
};
Radian convertdegreeToradian(Degree d){
	double radian=d.getdegree()*3.1415/180;
	return Radian(radian);
}
int main(){
	Degree d(90);
	Radian r;
	r=convertdegreeToradian(d);
	cout<<"90 degrees is equal to ";
	r.showradian();
	
	return 0;
}
/*
Output
90 degrees is equal to 1.57075 radians
*/

