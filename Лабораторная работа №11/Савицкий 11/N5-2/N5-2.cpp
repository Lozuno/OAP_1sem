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
    switch (t){
    case 10: {
        cout << "Введите целое число: ";
        unsigned int a;
        cin >> a;
        _itoa_s(a, temp, 2);
        cout << temp << endl;
        cout << "Инвертировать биты начиная с элемента: ";
        unsigned int q;
        cin >> q;
        q--;
        cout << "Количество битов: ";
        unsigned int n;
        cin >> n;
        unsigned int maska = 0;
        for (int i = q; i < q + n; i++) {
            maska += (1 << i);
        }
        cout << "Маска для a: ";
        _itoa_s(maska, temp, 2);
        cout << temp << endl;
        unsigned int res = (maska ^ a);
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
        cout << "Извлечь биты начиная с элемента : ";
        unsigned int p;
        cin >> p;
        cout << "Количество битов: ";
        unsigned int n;
        cin >> n;
        cout << "Введите целое число b: ";
        unsigned int b;
        cin >> b;
        _itoa_s(b, temp, 2);
        cout << temp << endl;
        cout << "Заменить биты начиная с элемента : ";
        unsigned int q;
        cin >> q;
        cout << "Количество битов: ";
        unsigned int m;
        cin >> m;
        unsigned int maska = 0;
        for (int i = p; i < p + n; i++) {
            maska += (1 << i);
        }
        cout << "Маска для a: "<<"\n";
        _itoa_s(maska, temp, 2);
        cout << temp << endl;
        a = (maska | a);
        cout << "Изменённое a: "<<"\n";
        _itoa_s(a, temp, 2);
        cout << temp << endl;
        unsigned int maskb = 0;
        unsigned int buffb = 0;
        for (int i = 0; i < q + m; i++) {
            if (i >= q) {
                maskb += (1 << i);
            }
            else {
                buffb += (1 << i);
            }
        }
        buffb = (b & buffb);
        _itoa_s(buffb, temp, 2);
        cout << "Сохранённая часть b: "<<"\n";
        cout << temp << endl;
        b = (((~maskb) & b)>>(q+m-n));
        _itoa_s(b, temp, 2);
        cout << "b после удаления m элементов: " << "\n";
        cout << temp << endl;
        b = ((maska >> p) | b);
        _itoa_s(b, temp, 2);
        cout << "Добавление n элементов числа a в b: " << "\n";
        cout << temp << endl;
        b = ((b << q)|buffb);
        _itoa_s(b, temp, 2);
        cout << "Возвращаем сохранённую часть b(Результат): " << "\n";
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
        unsigned int p;
        cin >> p;
        cout << "Количество битов: ";
        unsigned int n;
        cin >> n;
        cout << "Введите целое число b: ";
        unsigned int b;
        cin >> b;
        _itoa_s(b, temp, 2);
        cout << temp << endl;
        cout << "Заменить биты начиная с элемента : ";
        unsigned int q;
        cin >> q;
        cout << "Количество битов: ";
        unsigned int m;
        cin >> m;
        unsigned int maska = 0;
        for (int i = p; i < p + n; i++) {
            maska += (1 << i);
        }
        cout << "Маска для a: " << "\n";
        _itoa_s(maska, temp, 2);
        cout << temp << endl;
        unsigned int maskb = 0;
        unsigned int buffb = 0;
        for (int i = 0; i < q + m; i++) {
            if (i >= q) {
                maskb += (1 << i);
            }
            else {
                buffb += (1 << i);
            }
        }
        buffb = (b & buffb);
        _itoa_s(buffb, temp, 2);
        cout << "Сохранённая часть b: " << "\n";
        cout << temp << endl;
        b = (((~maskb) & b) >> (q + m - n));
        _itoa_s(b, temp, 2);
        cout << "b после удаления m элементов: " << "\n";
        cout << temp << endl;
        maska = ((~a) & maska);
        b = ((maska >> p) | b);
        _itoa_s(b, temp, 2);
        cout << "Добавление n элементов числа a в b: " << "\n";
        cout << temp << endl;
        b = ((b << q) | buffb);
        _itoa_s(b, temp, 2);
        cout << "Возвращаем сохранённую часть b(Результат): " << "\n";
        cout << temp << endl;
        break;
    }
    case 5: {
        cout << "Введите целое число a: ";
        unsigned int a;
        cin >> a;
        _itoa_s(a, temp, 2);
        cout << temp << endl;
        cout << "Извлечь биты начиная с элемента : ";
        unsigned int p;
        cin >> p;
        cout << "Количество битов: ";
        unsigned int n;
        cin >> n;
        cout << "Введите целое число b: ";
        unsigned int b;
        cin >> b;
        _itoa_s(b, temp, 2);
        cout << temp << endl;
        cout << "Заменить биты начиная с элемента : ";
        unsigned int q;
        cin >> q;
        cout << "Количество битов: ";
        unsigned int m;
        cin >> m;
        unsigned int maska = 0;
        for (int i = p; i < p + n; i++) {
            maska += (1 << i);
        }
        cout << "Маска для a: " << "\n";
        _itoa_s(maska, temp, 2);
        cout << temp << endl;
        a = (~maska & a);
        cout << "Изменённое a: " << "\n";
        _itoa_s(a, temp, 2);
        cout << temp << endl;
        unsigned int maskb = 0;
        unsigned int buffb = 0;
        for (int i = 0; i < q + m; i++) {
            if (i >= q) {
                maskb += (1 << i);
            }
            else {
                buffb += (1 << i);
            }
        }
        buffb = (b & buffb);
        _itoa_s(buffb, temp, 2);
        cout << "Сохранённая часть b: " << "\n";
        cout << temp << endl;
        b = (((~maskb) & b) >> (q + m - n));
        _itoa_s(b, temp, 2);
        cout << "b после удаления m элементов: " << "\n";
        cout << temp << endl;
        b = (~(maska >> p) & b);
        _itoa_s(b, temp, 2);
        cout << "Добавление n элементов числа a в b: " << "\n";
        cout << temp << endl;
        b = ((b << q) | buffb);
        _itoa_s(b, temp, 2);
        cout << "Возвращаем сохранённую часть b(Результат): " << "\n";
        cout << temp << endl;
        break;
    }
    default:
        break;
    }
}