using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, k;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	int* B = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> B[i];
	};
	for (k = 0; k < N; k++) {
		A[k] += B[k];
		B[k] = A[k] - B[k];
		A[k] = A[k] - B[k];
	};
	cout << "Массив А: " << endl;
	for (i = 0; i < N; i++) {
		cout << A[i] << endl;
	};
	cout << "Массив B: " << endl;
	for (i = 0; i < N; i++) {
		cout << B[i] << endl;
	};
}