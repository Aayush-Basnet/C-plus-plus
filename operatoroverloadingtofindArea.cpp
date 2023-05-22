#include<iostream>
#include<cmath>
using namespace std;
const double pi=3.14;
double area(int length){
	
	return length*length;
}

double area(double radius){
	
	return pi*radius*radius;
}

double area(double a, double b, double c){
	double s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
double area(double a,double b){
	return area(a,b,5);
}
int main(){
	double length;
	cout<<"Enter length for square: ";
	cin>>length;
	
	double radius;
	cout<<"Enter radius for circle: ";
	cin>>radius;
	
	double a,b,c;
	cout<<"Enter lenght for triangle: ";
	cin>>a>>b>>c;
	
	double triangleArea=area(a,b);
	double AreaTriangle= area(a,b,c);
	double circleArea= area(radius);
	double squareArea= area(length);
	
	cout<<"Area of square: "<<squareArea<<endl;
	cout<<"Area of square: "<<circleArea<<endl;
	cout<<"Area of square: "<<AreaTriangle<<endl;
	cout<<"Area of square: "<<triangleArea<<endl;
	
	return 0;
}
