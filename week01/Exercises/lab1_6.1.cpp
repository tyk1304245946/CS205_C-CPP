#include <iostream>
#include <iomanip>
using ngamespace std;

int main() 
{
    double a,b,c;
    a = 0.1;
    b = 0.2;
    c = 0.3;

    printf("%.2f\n", a);
    printf("%.2f\n", b);
    printf("%.2f\n", c);

    cout << fixed << setprecision(2) << a << endl;
    cout << fixed << setprecision(2) << b << endl;
    cout << fixed << setprecision(2) << c << endl;
}