#include <iostream>
#include <stdio.h>
#define ll long long
using namespace std;
int main()  {
    int var;
    setlocale(LC_ALL, "Russian");
    printf("Введите номер варианта:");
    scanf_s("%d", &var);
    switch (var){
        case 10: {
                int n, k;
                printf("Количество школьников:");
                scanf_s("%d",&n);
                printf("Количество яблок:");
                scanf_s("%d",&k);
                printf("Каждому достанется: %d", k / n);//Деление нацело т.к. оба операнда int
                return 0;
        }
        case 9: {
            double a;
            printf("Введите число a:");
            scanf_s("%lf", &a);
            a *= a;
            a *= a;
            printf("a^4=%lf", a);
            return 0;
        }
        case 11: {
            int h, a;
            h = 3;//единственное значение высоты подходящее к h^2=3h => h=3 
            a = h * 2;
            int S = a * h;
            int P = (a + h) * 2;
            printf("S=%d\n", S);
            printf("a=%d", a);
            return 0;
        }
        case 14: {
            int a, b, c;
            printf("Количество самолётов:");
            scanf_s("%d", &a);
            printf("Количество ракет:");
            scanf_s("%d", &b);
            printf("Количество спутников:");
            scanf_s("%d", &c);
            int sum = a * 50 + b * 100 + c * 200;
            printf("Количество очков:%d", sum);
            return 0;
        }
    }
}