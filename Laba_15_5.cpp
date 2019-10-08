using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, h;
	double k;
	k = 0;
	cout << "Введите размер массива: ";
	cin >> N;
	double* A = new double[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	k = A[0];
	for (i = 0; i < N; i++) {
		if (A[0] >= A[i]) {
			h = i;
		};
	};
	for (i = 1; i <= h; i++) {
		A[i - 1] = A[i];
	};
	A[h] = k;
	cout << "Упорядоченный массив А: " << endl;
	for (i = 0; i < N; i++) {
		cout << A[i] << endl;
	};
}