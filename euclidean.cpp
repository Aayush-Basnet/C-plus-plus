//WAP to display extended euclidean algo or Bezout's identity.
#include <iostream>
using namespace std;

int extendedEuclidean(int a, int b, int* x, int* y) {
	//Base Case
    if (a == 0) {
        *x = 0;
        *y = 1;
        return b;
    }
    
    int x1,y1;
    //To store results of recursive call
    int gcd= extendedEuclidean(b%a, a , &x1, &y1);
    //Update x and y using results of recursive call
    *x=y1-(b/a)*x1;
    *y = x1;

return gcd;
}

int main() {
    int a, b, x=1, y=1;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int g = extendedEuclidean(a, b, &x, &y);
    
    //displaying tracing of euclidean algorithm
    cout << "The GCD of " << a << " and " << b << " is: " << g << endl;
    cout << "Coefficients x and y such that " << g << " = " << a << " * " << x << " + " << b << " * " << y << endl;
    return 0;
}

