// Only works when exponent is integer
#include<iostream>
using namespace std;

int main() 
{
    double base = 1.5;
    int expo = -2;
    double res = 1.0;
    
    while (expo > 0) {
        res *= base;
        expo--;
    }
    
    while (expo < 0) {
        res /= base;
        expo++;
    }
    
    cout << "Result = " << res;
    
    return 0;
}