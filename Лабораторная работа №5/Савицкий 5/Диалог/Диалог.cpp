#include <iostream>
#define ll long long
using namespace std;
int main()  {
    setlocale(LC_ALL, "rus");
    ll a;
    cout << "Сколько вы сдали лаб по ОАП?(0-3:0 ; 3-5: 1;5+ :2)"<<endl;
    cin >> a;
    switch (a) {
    case 0:{
            cout << "Очень жаль, материал в корзине";
            break;
        }
    case 1: {
            cout << "Неплохо, БП";
            break;
        }
    case 2: {
            cout << "Отлично, БП, Удачи";
            break;
        }
    default:
            cout << "Неверный ввод";
    }

    return 0;
}