// Lab03_1.cpp
// ����� �������
// ����������� ������ �3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 12

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������

	cout << "x = "; cin >> x;

	A = ((2 + x) / pow(x, 2)) + 1;

	// ����� 1: ������������ � ��������� ����
	if (x < 0)
		B = pow(x, 3) - 2 * pow(x, 4);
	if (x >= 0 && x <= 2)
		B = pow(abs(x) + exp(x), 3);
	if (x > 2)
		B = 4 * cos(pow(x, 2) - 2);

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
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