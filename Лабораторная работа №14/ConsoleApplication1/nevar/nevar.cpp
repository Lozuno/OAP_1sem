#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int n = 2, m = 4;
	int B[n][m];
	int i, j, row[n] = { 0,0 }, column[n] = { 1,0 };
	cout << "Введите элементы массива" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> B[i][j];
	int min[n] = { B[0][0],B[1][0] };
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (min[i] > B[i][j])
			{
				min[i] = B[i][j];
				column[i] = i;
				row[i] = j;
			}
	cout << " Исходный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < m; j++)
			cout << "B[" << i << "," << j << "] =" << B[i][j] << "\t";
	}
	cout << endl;
	cout << "Минимальный элемент B[" << column[0] << "," << row[0] << "] =" << min[0] << endl;
	cout << "Минимальный элемент B[" << column[1] << "," << row[1] << "] =" << min[1] << endl;
}
