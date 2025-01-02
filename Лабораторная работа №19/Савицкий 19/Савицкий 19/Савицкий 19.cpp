#include <iostream>
#include <stdlib.h>
using namespace std;
bool findnumb(char* str) {
	for (int j = 0; j < strlen(str); j++) {
		if (str[j] >= '0' && str[j] <= '9') {
			return false;
		}
	}
	return true;
}
int main()  {
	setlocale(LC_ALL, "rus");
	int var;
	cout << "Введите номер варианта: ";
	cin >> var;
	switch (var) {
	case 10: {
		int part;
		cout << "Введите номер задания: ";
		cin >> part;
		switch (part) {
		case 1: {
			FILE* file;
			int err = fopen_s(&file, "fileA.txt", "r+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			char ch;
			int n = 0;
			while ((ch = fgetc(file)) != EOF) {
				if (ch == ' ')
					n++;
			}
			int* a = new int[n];
			fseek(file, 0, 0);
			for (int i = 0; i < n; i++) {
				fscanf_s(file, "%d", &a[i]);
			}
			int x;
			cout << "Введите число x: ";
			cin >> x;
			int avg1 = 0, avg2 = 1;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (i == j) continue;
					if (abs((a[avg1] + a[avg2]) / 2. - x) > abs((a[i] + a[j]) / 2. - x)) {
						avg1 = i;
						avg2 = j;
					}
				}
			}
			cout << a[avg1] << ' ' << a[avg2];
			fclose(file);
			break;
		}
		case 2: {
			FILE* input,*output;
			int err = fopen_s(&input, "F1.txt", "w+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			err = fopen_s(&output, "F2.txt", "w+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			cout << "Введите 5 строк для записи в файл F1\n";
			char str[256];
			for (int i = 0; i < 5; i++) {
				cin.ignore(cin.rdbuf()->in_avail());
				gets_s(str);
				fprintf(input, "%s\n", str);
			}
			fseek(input, 0, SEEK_SET);
			for (int i = 0; i < 5; i++) {
				fgets(str, sizeof(str), input);
				if (findnumb(str)) {
					fprintf(output, "%s", str);
				}
			}
			break;
		}
		}
		break;
	}
	case 15:{
		int part;
		cout << "Введите номер задания: ";
		cin >> part;
		switch (part) {
		case 1:{
			
			break;
		}
		case 2: {
			FILE* input, * output;
			int err = fopen_s(&input, "F1.txt", "w+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			err = fopen_s(&output, "F2.txt", "w+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			cout << "Введите 5 строк для записи в файл F1\n";
			char str[256];
			for (int i = 0; i < 8; i++) {
				cin.ignore(cin.rdbuf()->in_avail());
				gets_s(str);
				fprintf(input, "%s\n", str);
			}
			cout << "Введите номер строки с которой вести запись: ";
			int k;
			cin >> k;
			fseek(input, 0, SEEK_SET);
			for (int i = 0; i < 8; i++) {
				fgets(str, sizeof(str), input);
				if (i==k) 
					for (int j = i; j < min(i+3,8); j++) {
						fprintf(output, "%s", str);
						fgets(str, sizeof(str), input);
					}
			}
			break;
		}
		}
		break;
	}
	case 5:{
		int part;
		cout << "Введите номер задания: ";
		cin >> part;
		switch (part) {
		case 1: {
		
			break;
		}
		case 2: {
			
			break;
		}
		}
		break;
	}
	case 16:{
		int part;
		cout << "Введите номер задания: ";
		cin >> part;
		switch (part) {
		case 1: {
		
			break;
		}
		case 2: {
		
			break;
		}
		}
		break;
	}
	}
	return 0;
}