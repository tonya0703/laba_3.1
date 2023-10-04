// Lab03_1.cpp
// Клюка Антоніна
// Лабораторна робота №3.1
// Розгалуження, задане формулою: функція однієї змінної.
// Варіант 12

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x; // вхідний параметр
	double y; // результат обчислення виразу
	double A; // проміжний результат - функціонально стала частина виразу
	double B; // проміжний результат - функціонально змінна частина виразу

	cout << "x = "; cin >> x;

	A = ((2 + x) / pow(x, 2)) + 1;

	// спосіб 1: розгалуження в скороченій формі
	if (x < 0)
		B = pow(x, 3) - 2 * pow(x, 4);
	if (x >= 0 && x <= 2)
		B = pow(abs(x) + exp(x), 3);
	if (x > 2)
		B = 4 * cos(pow(x, 2) - 2);

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// спосіб 2: розгалуження в повній формі
	if (x < 0)
		B = pow(x, 3) - 2 * pow(x, 4);
	else 
		if (x > 2)
			B = 4 * cos(pow(x, 2) - 2);
		else
			B = pow(abs(x) + exp(x), 3);

	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}