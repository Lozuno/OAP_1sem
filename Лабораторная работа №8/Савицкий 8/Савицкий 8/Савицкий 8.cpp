#include <iostream>
using namespace std;
int main()  {
    setlocale(LC_ALL, "rus");
    cout << "Введите номер варианта: ";
    int t;
    cin >> t;
    switch (t) {
    case 10: {
        {
            const int n = 6;
            double x[n] = { 3,-2,0.7,-1,-2,7 };
            double y[n] = { 1,5,-1.2,6,9,-4 };
            double q = 0;
            for (int i = 0; i < n; i++) {
                q += x[i] * y[i];
            }
            cout << "q=" << q << endl;
        }
        {
            const int n = 5;
            double x[n] = { 2,1.7,4.7,6,3 };
            double a[3] = { 0.4,8,15 };
            double y[3];
            double sum = 0;
            for (int j = 0; j < n; j++) {
                sum += x[j];
            }
            for (int i = 0; i < 3; i++) {
                y[i] = a[i] + sum;
            }
            double k = y[0];
            for (int i = 1; i < 3; i++) {
                k = k < y[i] ? y[i] : k;
            }
            cout << "k=" << k << endl;
        }
        break;
    }
    case 11: {
        {
            double a = 5.45;
            const int n = 5;
            double y[n] = { 2.1,7.7,-4, 5,9 };
            double q = 1;
            for (int i = 0; i < n; i++) {
                q *= y[i] / (i * i + 1);
            }
            q *= 4;
            double s = 2 * a + q * sin(a);
            cout << "s=" << s << endl;
            cout << "q=" << q << endl;
        }
        {
            double y[5] = { 1.3,1,0.9,0.5,8 };
            double miny = y[0];
            for (int i = 0; i < 5; i++) {
                miny = miny > y[i] ? y[i] : miny;
            }
            double k = 1;
            for (int i = 0; i < 5; i++) {
                k *= y[i] + miny;
            }
            cout << "k=" << k << endl;
        }
        break;
    }
    }
    return 0;
}
