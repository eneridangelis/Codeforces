#include <iostream>
#include <math.h>

using namespace std;

double calculateSqrt(double num) {
    double x = num;
    
    while((x*x - num) > 0.00001) {
        x = 0.5*(x + (num/x));
    }
    return x;
}

int main() {
    
    cout << calculateSqrt(9) << endl;
    cout << calculateSqrt(2) << endl;

    return 0;
}
