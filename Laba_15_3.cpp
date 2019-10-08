using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, nch;
	i = 0;
	nch = 0;
	cout << "Введите размер массива: ";
	cin >> N;
	int* A = new int[N];
	cout << "Введите элементы массива: " << endl;
	for (int j = 0; j < N; j++) {
		cin >> A[j];
	};
	for (i = 0; i < N; i++) {
		if ((abs(A[i]) % 10 == 1) || (abs(A[i]) % 10 == 3) || (abs(A[i]) % 10 == 5) || (abs(A[i]) % 10 == 7) || (abs(A[i]) % 10 == 9)) {
			nch = A[i];
		};
	};
	cout << "Преобразованный массив А: " << endl;
	for (i = 0; i < N; i++) {
		if ((abs(A[i]) % 10 == 1) || (abs(A[i]) % 10 == 3) || (abs(A[i]) % 10 == 5) || (abs(A[i]) % 10 == 7) || (abs(A[i]) % 10 == 9)) {
			A[i] = nch;
		};
		cout << A[i] << endl;
	};
}