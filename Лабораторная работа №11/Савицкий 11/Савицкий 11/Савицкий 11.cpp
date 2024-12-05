#include <iostream>
#include <Windows.h>
using namespace std;
void main()
{
    char temp[32];
    setlocale(LC_ALL, "rus");
    int t;
    cout << "Введите номер варианта: ";
    cin >> t;
    switch (t) {//-3 +7 -5
    case 10: {
        cout << "Введите целое число: ";
        unsigned int a;
        cin >> a;
        _itoa_s(a, temp, 2);
        cout << temp << endl;
        cout << "Вывод битов начиная с элемента: ";
        unsigned int n;
        cin >> n;
        n--;
        unsigned int maska = 0;
        for (int i = n; i < n + 6; i++) {
            maska += (1 << i);
        }
        _itoa_s(maska, temp, 2);
        cout << temp << endl;
        unsigned int res = ((maska & a) >> n);
        cout << "Результат: ";
        _itoa_s(res, temp, 2);
        cout << temp << endl;
        break;
    }
    case 7: {
        cout << "Введите целое число a: ";
        unsigned int a;
        cin >> a;
        _itoa_s(a, temp, 2);
        cout << temp << endl;
        cout << "Введите целое число b: ";
        unsigned int b;
        cin >> b;
        _itoa_s(b, temp, 2);
        cout << temp << endl;
        cout << "Извлечь биты начиная с элемента : ";
        const unsigned int q = 4;
        cout << q << "\n";
        cout << "Количество битов: ";
        const unsigned int n = 4;
        cout << n << "\n";
        unsigned int maska = 0;
        for (int i = q; i < q + n; i++) {
            maska += (1 << i);
        }
        cout << "Маска для a: ";
        _itoa_s(maska, temp, 2);
        cout << temp << endl;
        unsigned int maskb = ((maska & a)>>q);
        cout << "Маска для b: ";
        _itoa_s(maskb, temp, 2);
        cout << temp << endl;
        unsigned int res = ((b << n) | maskb);
        cout << "Результат: ";
        _itoa_s(res, temp, 2);
        cout << temp << endl;
        break;
    }
    case 1: {
        cout << "Введите целое число a: ";
        unsigned int a;
        cin >> a;
        _itoa_s(a, temp, 2);
        cout << temp << endl;
        cout << "Извлечь биты начиная с элемента : ";
        const unsigned int q = 3;
        cout << q << "\n";
        cout << "Количество битов: ";
        const unsigned int n = 13;
        cout << n << "\n";
        unsigned int sum = 0;
        a=a >> q;
        for (int i = q; i < q + n; i++) {
            sum++;
            sum -= a & 1;
            a = (a >> 1);
        }
        cout << "Количество нулей : " << sum;
        break;
    }
    case 5: {
        cout << "Введите целое число a: ";
        unsigned int a;
        cin >> a;
        _itoa_s(a, temp, 2);
        cout << temp << endl;
        unsigned int sum = 0;
        unsigned int i = 0;
        while (a > 0) {
            sum += a & 1;
            a = (a >> 1);
            i++;
        }
        cout << "Количество единиц: " << sum<<"\n";
        cout << "Количество нулей: " << i - sum<<"\n";
        cout << "Единиц больше на: " << (sum)-(i - sum) << "\n";
        break;
    }
    default:
        break;
    }
}