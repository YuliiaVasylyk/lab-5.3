// Lab_05_3.cpp
// <Василик Юлія>
// Лабораторна робота №5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
// Варіант 2


#include <iostream>
#include <cmath>

using namespace std;

double s(const double x);

int main()
{
	double tp, tk, m;
	int n;

	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;

	double dt = (tk - tp) / n;

	double t = tp;

	while (t <= tk)
	{
		m = s(2 * t + 1) + 2 * s(pow(t, 2)) + sqrt(s(1));
		cout << t << " " << m << endl;
		t += dt;
	}
	return 0;
}
double s(const double x)
{
	if (abs(x) >= 1 || x == 0)
		return (cos(x) * cos(x) + 1) / (exp(x));
	else
	{
		double S = 0;
		int k = 0;
		double a = 1;
		S = a;
		do
		{
			k++;
			double R = (2 * x * x) / (k * (2 * k + 1));
			a *= R;
			S += a;
		} while (k < 4);
		return 1 / sin(2 * x) * S;
	}
}