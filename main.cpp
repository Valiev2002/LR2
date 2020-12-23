#include <iostream>
#include <cmath>
using namespace std;
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
        cout << "Task 4 " << endl;
        cout << "Enter value: " << endl;
        double x1;
        cin >> x1;
        int n;
        y = sin(x);
        double j;
        double u = 1.0;
        for (int i = -2; i >= -6; --i) {
            n = 0;
            j = x;
            while ((j - y) >= 0.01 * u) {
                n++;
                j=pow(-1, n) * pow(x, 2 * n + 1) / !(2 * n + 1);
                cout << y << " " << j << endl;
            }
            return 0;
        }
    }
}