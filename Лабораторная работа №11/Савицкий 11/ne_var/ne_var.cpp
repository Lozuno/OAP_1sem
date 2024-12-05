#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA = 14;//1110 в двоичной записи - выделяет 3 бита начиная со 2
	int maskB = ~maskA >> 1;//...1111000 маска отмечает все элементы кроме 3 битов начиная с 1
	cout << "Первое число А="; cin >> A;
	cout << "Второе число В="; cin >> B;
	_itoa_s(A, tmp, 2);
	cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2);
	cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);//применение маски для копирования 3 элементов,сдвиг вправо для отображения начиная с 1 бита
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);//применение маски на B для обнуления 3 элементов начиная с 1 бита
	cout << " Очищены биты в B: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);//копирование А с маской в B с маской спомощью |(или)
	cout << " Результат B=" << tmp << endl;
}

