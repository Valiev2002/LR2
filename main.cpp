#include <iostream>
#include <cmath>
using namespace std;
int main() {
    for (int i = 0; i < 255; i++)
        cout << "task 1 completed" << endl;
    //task 2
    char v;
    cout << "Hello" << endl;
    cout << "Entered value: ";
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
        //task 3
        int x, y;
        cout << "Enter x value" << endl;
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
        //task 4
        cout << "enter value" << endl;
        double x1;
        cin >> x1;
        int n;
        y = sin(x);
        double k;
        double j = 1.0;
        for (int i = -2; i >= -6; --i) {
            n = 0;
            k = 1.0 * x;
            while (abs(k - y) >= 0.001 * j) {
                n++;
                k += pow(-1, n) * pow(x, 2 * n + 1) / !(2 * n + 1);
                cout << y << " " << k << endl;
            }
            j *= 0.1;
        }
        return 0;
    }
}
