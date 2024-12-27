#include <iostream>
#define ll long long
using namespace std;
int main()  {
    ll n, m, k;
    setlocale(LC_ALL, "rus");
    cin >> n >> m >> k;
    if (n % 2 != 0) {
        cout << "Есть";
        return 0;
    }
    if (m % 2 != 0) {
        cout << "Есть";
        return 0;
    }
    if (k % 2 != 0) {
        cout << "Есть";
        return 0;
    }
    cout << "Нет";
    return 0;
}
