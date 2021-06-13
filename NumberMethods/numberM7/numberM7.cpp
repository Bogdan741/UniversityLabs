#include "Header.h"
#include "cmath"
#include <utility>
#include <iomanip>
#include <locale>

using namespace std;
void b_print(const vector<double>& b, int i);

void b_print(double x, double y, int i);

//Повертає розв'язок системи нелінійних рівнянь другого порядку, що був знайденний
//ітераційним методом
std::pair<double, double> iteration_method(double x, double y, double e);

std::vector<double> function(double x, double y);

//Повертає розв'язок системи нелінійних рівнянь другого порядку, що був знайденний
//методом Ньютона
std::pair<double, double> newton_method(double x, double y, double e);
//--------------------------------------------------------------------------------
int main()
{
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	cout.precision(4);
	setlocale(LC_ALL, "ukr");
	iteration_method(0.5, -0.1, 0.001);
	newton_method(0.1, 0.1, 0.001);

	return 0;
}
//--------------------------------------------------------------------------------
void b_print(const std::vector<double>& b, int i)
{
	std::cout << left << setw(3) << i;
	std::cout << left << setw(10) << b[0];
	std::cout << left << setw(10) << b[1] << "\n";
}
//--------------------------------------------------------------------------------
void b_print(double x, double y, int i)
{
	std::cout << left << setw(4) << i;
	std::cout << left << setw(10) << x;
	std::cout << left << setw(10) << y << "\n";
}
//--------------------------------------------------------------------------------
std::pair<double, double> iteration_method(double x, double y, double e)
{
	double x_n;
	double y_n;
	int i = 0;
	b_print(x, y, i);
	while (true)
	{
		x_n = -cos(y - 2);
		y_n = sin(x + 0.5) - 1;
		++i;
		b_print(x_n, y_n, i);
		if (fabs(x_n - x) + fabs(y_n - y) < e)
			break;
		else
		{
			x = x_n;
			y = y_n;
		}
	}
	std::cout << "Кiлькiсть iтерацiй в методi простої iтарацiї: " << i << "\n";
	return std::pair<double, double>(x_n, y_n);
}
//--------------------------------------------------------------------------------
std::vector<double> function(double x, double y)
{
	std::vector<double> r(2);
	r[0] = sin(x + 0.5) - y - 1;
	r[1] = x + cos(y - 2);
	return r;
}
//--------------------------------------------------------------------------------
std::pair<double, double> newton_method(double x, double y, double e)
{
	MyMatrix<double> J_1(2, 2, 0);
	J_1[0][0] = 0.5313;
	J_1[0][1] = 0.5614;
	J_1[1][0] = -0.5614;
	J_1[1][1] = 0.4633;

	std::vector<double> X(2);
	X[0] = x;
	X[1] = y;
	std::vector<double> X_n(2);
	std::vector<double> f(2);
	int i = 0;
	b_print(X, i);
	while (true)
	{
		auto t = J_1 * function(X[0], X[1]);
		X_n[0] = X[0] - t[0];
		X_n[1] = X[1] - t[1];
		++i;
		b_print(X_n, i);
		if (t[0] < e && t[1] < e)
			break;
		else
		{
			X = X_n;
		}
	}
	std::cout << "Кiлькiсть iтерацiй в методi Ньютона: " << i << "\n";
	return std::pair<double, double>(X_n[0], X_n[1]);
}
//--------------------------------------------------------------------------------
