#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char str[1000]="love home main big mama creepy safety side way problem area idea guy";
    cout << "love home main big mama creepy safety side way problem area idea guy" << endl;
    char en[256];
    cout << "Введите окончание:";
    cin >> en;
    int i = 0, j = 0;
    int start = 0;
    while (str[i] != '\0') {//не конец строки
        if (str[i] == ' ') {//кончилось слова
            if (en[j] == '\0') {//прошли весь кончаток
                for (int k = start; k < i; k++) {//выводим со старта
                    cout << str[k];
                }
                cout << ' ';
            }
            j = 0;//сбрасываем окончание
            start = i + 1;//ставим начало нового слова
        }
        if (str[i] == en[j]) {
            j++;//сравниваем со следуйщей буквой
        }
        else {
            j = 0;//считаем сначала окончание
        }
        i++;//следующая буква в мейн строке
    }
    if (en[j] == '\0') {//проверка последнего слова
        for (int k = start; k < i; k++) {
            cout << str[k];
        }
        cout << ' ';
    }
}
