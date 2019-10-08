using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, k;
	double sr;
	sr = 0;
	k = 1;
	cout << "Введите размер массива: ";
	cin >> N;
	double* A = new double[N];
	cout << "Введите элементы массива: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i];
	};
	double* B = new double[N];
	cout << "Массив В: ";
	for (i = 0; i < N; i++) {
		sr = sr + A[i];
		B[i] = sr / k;
		k++;
	};
	for (i = 0; i < N; i++) {
		cout << B[i] << endl;
	};
}