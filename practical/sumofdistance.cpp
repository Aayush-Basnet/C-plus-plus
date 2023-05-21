#include <iostream>
using namespace std;

class Distance {
  private:
    int meter;
    int centimeter;
    int kilometer;
  public:
    Distance() {
      meter = 0;
      centimeter = 0;
      kilometer = 0;
    }
    void getdata() {
      cout << "Enter kilometer: ";
      cin >> kilometer;
      cout << "Enter meter: ";
      cin >> meter;
      cout << "Enter centimeter: ";
      cin >> centimeter;
    }
    void show() {
      cout << "Distance: " << kilometer << "km " << meter << "m " << centimeter << "cm" << endl;
    }
    void add(Distance &d1, Distance &d2) {
      meter = d1.meter + d2.meter;
      centimeter = d1.centimeter + d2.centimeter;
      kilometer = d1.kilometer + d2.kilometer;
      if (centimeter >= 100) {
        meter += centimeter / 100;
        centimeter = centimeter % 100;
      }
      if (meter >= 1000) {
        kilometer += meter / 1000;
        meter = meter % 1000;
      }
    }
};

int main() {
  Distance d1, d2, result;
  cout << "Enter the first distance:" << endl;
  d1.getdata();
  cout << "Enter the second distance:" << endl;
  d2.getdata();
  result.add(d1, d2);
  result.show();
  return 0;
}
/*
Output
Enter the first distance:
Enter kilometer: 4
Enter meter: 2500
Enter centimeter: 120
Enter the second distance:
Enter kilometer: 3
Enter meter: 3780
Enter centimeter: 3931
Distance: 13km 320m 51cm
*/

