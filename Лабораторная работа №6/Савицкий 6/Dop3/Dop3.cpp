#include <iostream>
using namespace std;
int main()  {
    int a;
    cin >> a;
    int k;
    if(a!=0)
    k = a / abs(a);
    int sum = 0;
    while (a != 0) {
        int k1 = a / abs(a);
        if (k != k1) {
            k = k1;
            sum++;
        }
        cin >> a;
    }
    cout << sum;

    return 0;
}
