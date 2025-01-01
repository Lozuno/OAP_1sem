#include <iostream>
#include <stdlib.h>
using namespace std;
int main()  {
	setlocale(LC_ALL, "rus");
	int var;
	cout << "Введите номер варианта: ";
	cin >> var;
	switch (var) {
	case 10:{
		int part;
		cout << "Введите номер задания: ";
		cin >> part;
		switch (part) {
		case 1:{
			FILE* file;
			int err = fopen_s(&file, "fileA.txt", "r+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			for()
			int x;
			cout << "Введите число x: ";
			cin >> x;
			int avg1 = 0, avg2 = 1;
			for (int i = 0; i < 20; i++) {
				for (int j = 0; j < 20; j++) {
					if (i == j) continue;
					if (abs((a[avg1] + a[avg2]) / 2. - x) > abs((a[i] + a[j]) / 2. - x)) {
						avg1 = i;
						avg2 = j;
					}
				}
			}
			fprintf_s(file, "%d %d", a[avg1], a[avg2]);
			fclose(file);
		}
		case 2:{
		
		}
		}
	}
	case 15:{}
	case 5:{}
	case 16:{}
	}
	return 0;
}