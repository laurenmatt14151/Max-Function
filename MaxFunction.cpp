#include <iostream>
#include <iomanip>
using namespace std;

double larger(double num1, double num2);
int main(){
    cout << showpoint << fixed << setprecision(2);

    double num1 = 2.05;
    double num2 = 94.57;
    double num3 = 100.6;

    double max = larger(num1, num2);
    max = larger(max, num3);

    cout << "The largest number is " << max;

    return 0;
}
double larger(double num1, double num2){
    double max;
    if(num1 > num2)
        max = num1;
    else
        max = num2;

    return max;
}