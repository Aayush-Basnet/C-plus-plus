//Write a program to display the truth table of Conjuction
#include <iostream>
using namespace std;

int main() {
    cout << "A\tB\t A && B" << endl;
    cout << "---------------------" << endl;
    cout << "0\t0\t " << (0 && 0) << endl;
    cout << "0\t1\t " << (0 && 1) << endl;
    cout << "1\t0\t " << (1 && 0) << endl;
    cout << "1\t1\t " << (1 && 1) << endl;
    return 0;
}

