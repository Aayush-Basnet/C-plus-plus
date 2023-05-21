/*Write a program using overloaded function named area() that can be used to compute 
the area of triangle, rectangle as well as circle.
*/
#include <iostream>
using namespace std;

const double pi = 3.14;

double area(int length, int width) {
  return length * width;
}

double area(double base, double height) {
    return 0.5 * base * height;
  
}

double area(double radius) {

      return pi * radius * radius;
}

int main() {
  int length = 4;
  int width = 2;
  double base = 5.0;
  double height = 3.0;
  double radius = 2.5;
  
  double areaRectangle = area(length, width);
  double areaTriangle = area(base, height);
  double areaCircle = area(radius);
  
  cout << "Area of rectangle: " << areaRectangle << endl;
  cout << "Area of triangle: " << areaTriangle << endl;
  cout << "Area of circle: " << areaCircle << endl;
  
  return 0;
}
/*
Output
Area of rectangle: 8
Area of triangle: 7.5
Area of circle: 19.625
*/

