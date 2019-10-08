using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, k, h, l;
	double min, max;
	cout << "Введите размер массива: ";
	cin >> N;
	double* A = new double[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	min = A[0];
	max = A[0];
	l = 0;
	h = 0;
	for (i = 0; i < N; i++) {
		if (A[i] <= min) {
			h = i;
			min = A[i];
		}
		else if (A[i] >= max) {
			l = i;
			max = A[i];
		};
	};
	if (h <= l) {
		for (k = h + 1; k < l; k++) {
			A[k] = 0;
		};
	}
	else {
		for (k = l + 1; k < h; k++) {
			A[k] = 0;
		};
	};
	cout << "Массив А после преобразования: " << endl;
	for (i = 0; i < N; i++) {
		cout << A[i] << endl;
	};
}