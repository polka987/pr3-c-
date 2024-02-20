#include <string>
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	const int a = 3;
	const int b = 5;
	double x[a][b];
	cout << "Введите элементы массива c 3 по 5:\n";
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < b; ++j) {
			cout << "Введите элемент [" << i << "][" << j << "]: ";
			cin >> x[i][j];
		}
	}

	cout << "Средние арифметические элементов строк:\n";
	for (int i = 0; i < a; ++i) {
		double sum = 0.0;
		for (int j = 0; j < b; ++j) {
			sum += x[i][j];
		}
		double avg = sum / b;
		cout << "Среднее строк " << i << " = " << avg << endl;
	}





}