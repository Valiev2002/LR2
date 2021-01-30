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
    int x, y;
    cout << "Enter x value: " << endl;
    cin >> x;
    y = x % 4;
    switch (y) {
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
    int n;
    y = sin(x1);
    long double z;
    long double m;
    int b = 1;
    for (int i=-2; i>=-6;--i) {
        n = 1;
        z = 1.0*x1;
        m = -1.0*pow(x1, 3) / fact(3.0);
        while ((y-z) >= 0.001) {
            n++;
            z += m;
            m = -1.0 *m*pow(x1, 2) / ((2.0 * n + 1.0) * 2.0 * n);
            cout << y << " " << z << endl;
                   }
        b *= 0.1;
        cout << "for 10^" << i << " required iterations :" << n << endl;
    }
    return 0;
}