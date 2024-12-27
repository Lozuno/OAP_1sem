#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
    int var;
    cin >> var;
    cin.ignore(cin.rdbuf()->in_avail());
    switch (var)    {
    case 1: {
        setlocale(LC_ALL, "rus");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        char str[1000];
        cin.getline(str, 1000);
        char en[256];
        cin.ignore(cin.rdbuf()->in_avail());
        cin >> en;
        int i = 0, j = 0;
        int start = 0;
        while (str[i] != '\0') {//не конец строки
            if (str[i] == ' ') {//кончилось слова
                if (en[j] == '\0') {//прошли всё окончание
                    for (int k = start; k < i; k++) {//выводим со старта
                        cout << str[k];
                    }
                    cout << ' ';
                }
                j = 0;//сбрасываем окончание
                start = i + 1;//ставим начало нового слова
            }
            if (str[i] == en[j]) {
                j++;//сравниваем со следующей буквой
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
        break;
    }
    case 3: {
        setlocale(LC_ALL, "rus");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        char str[1000];
        cin.getline(str, 1000);
        char word[256];
        int i = 0, j = 0;
        int start = 0;

        while (str[i] != '\0') {
            word[j] = str[i];//добавляем следующую букву в слово
            if (str[i] == ' ') {//слово кончилось
                j = 0;//начинаем смотреть слово с нуля
                bool flag = true;//флаг что мы не нашли такое же слово(по умолчанию тру)
                for (int k = 0; k < start; k++) {//смотрим всю строку с начала до начала текущего слова
                    if (word[j] == ' ') {//конец слова
                        if (str[k] == ' ') {// и конец строки
                            flag = false;//нашли такое же слово, значит не подходит выводить не будем
                            break;//ливаем с цикла на это слово уже все равно
                        }
                        else {//нашли слово внутри другого слова, скипаем текущее слово
                            while (str[k] != ' ' && str[k] != '\0') {//скипаем текущее слово до пробела или конца строки( с отсальным разберётся условие цикла)
                                k++;
                            }
                        }
                    }
                    if (str[k] == word[j]) {//буква совпала проверяем следующую
                        j++;
                    }
                    else {//буква не совпала слово полностью не подходит смотрим следующее
                        j = 0;
                        while (str[k] != ' ' && str[k] != '\0') {
                            k++;
                        }
                    }
                }
                if (flag) {//если флаг не стал фолс значит не нашли такое же слово
                    for (int k = 0; k < i - start; k++) {//выводим слово
                        cout << word[k];
                    }
                    cout << ' ';//пробел :)
                }
                start = i + 1;//переставляем начало для нового слова
                j = 0;//начинаем записывать новое слово с нуля
                i++;
            }
            else {
                j++;
                i++;
            }
        }
        word[j] = ' ';//ставим в конец слова пробел, чтобы условия работали и код переписывать не пришлось
        j = 0;//проверяем последнее слово, см комменты сверху
        bool flag = true;
        for (int k = 0; k < start; k++) {
            if (word[j] == ' ') {
                if (str[k] == ' ') {
                    flag = false;
                    break;
                }
                else {
                    while (str[k] != ' ' && str[k] != '\0') {
                        k++;
                    }
                }
            }
            if (str[k] == word[j]) {
                j++;
            }
            else {
                while (str[k] != ' ' && str[k] != '\0') {
                    k++;
                }
            }
        }
        if (flag) {
            for (int k = 0; k < i - start; k++) {
                cout << word[k];
            }
            cout << ' ';
        }
        break;

        }
    case 4: {
        const int N = 100;
        char str[N];
        cout << "Enter string: ";
        cin.getline(str, N);
        unsigned int m;
        m = strlen(str);
        for (int i = m - 1; i >= 0; i--)
        {
            cout << str[i];
            if (str[i] == ' ')
            {
                i--;
                while (str[i] != ' ')
                {
                    i--;
                }
            }
        }
        break;

    }
    }
}
