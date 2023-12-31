// Lab_04_2.cpp
// < ����� ���� >
// ����������� ������ � 4.2
// ��������� �������, ������ ��������: ������� ������ ����� (3.1).
// ������ 8
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 2 + 6 * x;
		if (x <= 0)
			B = log(cos(x)) + pow(x, 5);
		else
			if (0 < x && x <= 3)
				B = 1 / tan((1 + log(x)) / 3);
			else
				B = 12 * x - pow(x, 8);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}