
#include <iostream>
#include <cmath>
using namespace std;
long double fact(int N)
{
    if(N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}
int main() {
    cout << "Hello,dear friend" << endl;
    cout << "Task 1" << endl;
    for (int i = 0; i < 128; i++)
        cout << "Number: " << i << "\t" << "Code: " << static_cast<char>(i) << endl;

    cout << "Task 1 completed" << endl;
    cout << "Task 2" << endl;
    cout << "Entered value: ";
    char v;
    cin >> v;
    {
        if (v >= 48 && v <= 57) {
            cout << "digit" << endl;
        } else if (v >= 65 && v <= 90) {
            cout << "Letter" << endl;
        } else if (v >= 97 && v <= 122) {
            cout << "Letter" << endl;
        } else {
            cout << "Dont know this symbol" << endl;
        }
    }
    cout << "Task 2 completed" << endl;
    //task 3
    cout << "Task 3 " << endl;
    int x;
    double y;
    cout << "Enter x value: " << endl;
    cin >> x;
    int q= x % 4;
    switch (q) {
        case 0:
            cout << "y(x)=" << 0 << endl;
            break;
        case 1:
            cout << "y(x)=" << 5 - x << endl;
            break;
        case 2:
            cout << "y(x)=" << 1 / x << endl;
            break;
        case 3:
            cout << "y(x)=" << x << endl;
            break;
    }
    cout << "Task 3 completed" << endl;
    //task 4
    cout << "Task 4" << endl;
    cout << "Enter x" << endl;
    double x1;
    cin >> x1;
    int n=1;
    y = sin(x1);
    double z;
    double m;
    z=x1;
    double b;
    for (int i=-2; i>=-6;--i) {
        b= pow(10,i);
         do
             {
            m = pow(-1,n)*pow(x1, 2*n+1) / (fact(2 * n + 1));
            z += m;
            n++;
        }
        while (abs(y-z) >=b);
        cout << y << " " << z << endl;
        cout << "for 10^" << i << " required iterations :" << n << endl;
    }
    return 0;
}