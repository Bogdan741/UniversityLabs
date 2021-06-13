#include "Header.h"
double my_func(double x)
{
	return log(1 + fabs(1 - 5 * pow(x, 2) + 3 * pow(x, 5)));
}
//--------------------------------------------------------------------------------
double integral_left_rec(function<double(double)> f, double a, double b, double h)
{
	double sum{};
	double x{ a };
	while (x < b) {
		sum += f(x) * h;
		x += h;
	}
	return sum;
}
//--------------------------------------------------------------------------------
double integral_right_rec(function<double(double)> f, double a, double b, double h)
{
	double sum{};
	double x{ a+h };
	while (x <= b) {
		sum += f(x) * h;
		x += h;
	}
	return sum;
}
//--------------------------------------------------------------------------------
double integral_mid_rec(function<double(double)> f, double a, double b, double h) {
	double sum{};
	double x{ a + h/2 };
	while (x < b) {
		sum += f(x) * h;
		x += h;
	}
	return sum;
}
//--------------------------------------------------------------------------------
double integral_trapeze(function<double(double)> f, double a, double b, double h) {
	double sum{(f(a)+f(b))*h/2};
	double x{ a + h };
	while (x < b) {
		sum += f(x) * h;
		x += h;
	}
	return sum;
}
//--------------------------------------------------------------------------------
double integral_simps(function<double(double)> f, double a, double b, double h)
{
	double x{ a };
	int n = floor((b - a) / (2*h));
	double sum{f(a)-f(a+2*n*h)};
	for (int i = 1; i <= n; ++i){
		sum += 4 * f(x + (2.0 * i - 2) * h);
		sum += 2 * f(x + 2.0 * i * h);
	}
	
	return h/3*sum;
}

//--------------------------------------------------------------------------------
