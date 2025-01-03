#include <iostream>
#include <stdlib.h>
#include <Windows.h>
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
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
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
			FILE* input,*output;
			int err = fopen_s(&input, "file15_1.txt", "r+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			err = fopen_s(&output, "file15_2.txt", "w+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			int n;
			fscanf_s(input,"%d", &n);
			double** a = new double*[n];
			for (int i = 0; i < n; i++) {
				a[i] = new double[n];
				for (int j = 0; j < n; j++) {
 					fscanf_s(input, "%lf", &(a[i][j]));
				}
			}
			cout << "Введите номер столбца: ";
			int k;
			cin >> k;
			fprintf_s(output, u8"Столбец номер: %d\n", k--);
			for (int i = 0; i < n; i++) {
				fprintf_s(output, "%f\n", a[i][k]);
			}
			fclose(output);
			fclose(input);
			for (int i = 0; i < n; i++) {
				delete[] a[i];
			}
			delete[] a;
			break;
		}
		case 2: {
			FILE* input, *output;
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
			fclose(input);
			fclose(output);
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
			FILE *input, *output, *input2;
			int err = fopen_s(&input, "file5_1.txt", "r+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			err = fopen_s(&input2, "file5_2.txt", "r+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			err = fopen_s(&output, "file5_3.txt", "w+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			
			int n;
			fscanf_s(input, "%d", &n);
			int** a = new int* [n];
			for (int i = 0; i < n; i++) {
				a[i] = new int[n];
				for (int j = 0; j < n; j++) {
					fscanf_s(input, "%d", &(a[i][j]));
				}
			}
			fscanf_s(input2, "%d", &n);
			int** b = new int* [n];
			for (int i = 0; i < n; i++) {
				b[i] = new int[n];
				for (int j = 0; j < n; j++) {
					fscanf_s(input2, "%d", &(b[i][j]));
				}
			}
			int** c = new int* [n];
			for (int i = 0; i < n; i++) {
				c[i] = new int[n];
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					int sum = 0;
					for (int k = 0; k < n; k++) {
						sum += a[i][k] * b[k][j];
					}
					c[i][j] = sum;
				}
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					fprintf_s(output, "%d ", (c[i][j]));
				}
				fprintf_s(output, "\n");
			}
			fclose(output);
			fclose(input);
			for (int i = 0; i < n; i++) {
				delete[] a[i];
			}
			delete[] a;
			break;
		}
		case 2: {
			FILE* input, *output;
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
			for (int i = 0; i < 6; i++) {
				cin.ignore(cin.rdbuf()->in_avail());
				gets_s(str);
				fprintf(input, "%s\n", str);
			}
			fseek(input, 0, SEEK_SET);
			for (int i = 0; i < 6; i++) {
				fgets(str, sizeof(str), input);
				if(str[0]=='A')
					fprintf(output, "%s", str);
			}
			fclose(input);
			fclose(output);
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
			FILE* input, * output, * input2;
			int err = fopen_s(&input, "file16_1.txt", "r+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			err = fopen_s(&input2, "file16_2.txt", "r+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			err = fopen_s(&output, "file16_3.txt", "w+");
			if (err != 0) {
				cout << "Ошибка открытия файла\n";
				return -1;
			}
			int sum = 0;
			int buf = 0;
			while (ftell(input)!=EOF) {
				fscanf_s(input, "%d", &buf);
				sum += buf;
			}
			while () {
				fscanf_s(input2, "%d", &buf);
				sum += buf;
			}
			fprintf_s(output, "%d", sum);
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