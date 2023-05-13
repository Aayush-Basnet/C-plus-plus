/*write a program defining a class named complex with two data member, real and imaginary. 
use necessary member functions for input/output and define a member function that adds the 
two complex objects and return object. also display the result using a member function display().
*/
#include <iostream>
using namespace std;

class Complex {
  private:
    int real;
    int imaginary;
  public:
    void input() {
      cout << "Enter real part: ";
      cin >> real;
      cout << "Enter imaginary part: ";
      cin >> imaginary;
    }
    void output() {
      cout << real << " + " << imaginary << "i" << endl;
    }
    Complex add(Complex c) {
      Complex temp;
      temp.real = real + c.real;
      temp.imaginary = imaginary + c.imaginary;
      return temp;
    }
    void display() {
      cout << "Result: ";
      output();
    }
};

int main() {
  Complex c1, c2, c3;
  cout << "Enter the first complex number:" << endl;
  c1.input();
  cout << "Enter the second complex number:" << endl;
  c2.input();
  c3 = c1.add(c2);
  c3.display();
  return 0;
}
/*
Output
Enter the first complex number:
Enter real part: 2
Enter imaginary part: 3
Enter the second complex number:
Enter real part: 1
Enter imaginary part: 2
Result: 3 + 5i
*/

