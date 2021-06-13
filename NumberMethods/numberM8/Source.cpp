#include "Header.h"
#include <cmath>
using namespace std;
//--------------------------------------------------------------------------------
int one(int n)
{
	int res = 1;
	for (int i = 0; i < n; i++)
	{
		res *= -1;
	}
	return res;
}
//--------------------------------------------------------------------------------
double polynom_lan(int n, const std::vector<double>& x, const std::vector<double>& y, double value)
{
	double res = 0.0;
	for (auto i = 0; i < n; i++)
	{
		double l_i = 1;
		for (auto j = 0; j < n; j++)
		{
			if (i != j)
			{
				l_i *= (value - x[j]) / (x[i] - x[j]);
			}
		}
		res += l_i*y[i];
	}
	return res;
}
//--------------------------------------------------------------------------------

double polynom_lan_equal(int n, const std::vector<double>& y, double q)
{
	double prod{ q };
	for (int i{ 1 }; i < n; ++i)
		prod *= (q - i)/i;
	double sum{};
	for (int i{ 0 }; i < n; ++i)
	{
		sum += one(n - 1 - i) * tgamma(n) * y[i] / (tgamma(n - i) * tgamma(i + 1) * (q - i));
	}
	return prod * sum;
}
//--------------------------------------------------------------------------------
Polynomial<double> polynom_lan(int n, const std::vector<double>& x, const std::vector<double>& y)
{
	Polynomial<double> res{};
	for (auto i = 0; i < n; i++)
	{
		Polynomial<double> l_i(std::vector<double>{1.0});
		for (auto j = 0; j < n; j++)
		{
			if (i != j)
			{
				l_i *= Polynomial<double>(std::vector<double>{-x[j], 1.0}) / (x[i] - x[j]);
			}
		}
		res += l_i * y[i];
	}
	return res;
}
//--------------------------------------------------------------------------------
double polynom_n(int n, double h, const std::vector<double>& x, const std::vector<double>& y, double value)
{
	
	std::vector<std::vector<double>> dy(n);
	for (int i = 0; i < n; i++)
	{
		dy[i].resize(n,0);
	}
	for (int i = 0; i < n; ++i)
		dy[i][0] = y[i];
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (j > (n - i - 1))
				dy[j][i] = 0;
			else
				dy[j][i] = dy[j+1][i-1] - dy[j][i-1];
		}
	}
	show_table(dy);
	cout << '\n';
	//double h = x[1] - x[0];
	double ser = 0;
	for (int i = 0; i < n; ++i)
		ser += (x[0] + i * h);
	ser /= n;
	long long f = 1;
	double q, k, res = 0;
	if (value < ser)
	{
		q = (value - x[0]) / h;
		for (int i = 0; i < n; ++i)
		{
			if (i != 0)
				f *= i;
			if (i == 0)
				k = 1;
			/*else if (i == 1)
				k = q;*/
			else
				k *= q - i + 1;
			res += (dy[0][i] * k) / f;
		}
	}
	else
	{
		for (int i = 0; i < n; ++i)
		{
			q = (value - (x[0] + static_cast<double>(n-1) * h)) / h;
			if (i != 0)
				f *= i;
			if (i == 0)
				k = 1;
			else if (i == 1)
				k = q;
			else
				k *= q + i - 1;
			res += (dy[n - i - 1][i] * k) / f;
		}
	}
	return res;
}
//--------------------------------------------------------------------------------
void show_table(const std::vector<std::vector<double>>& ar)
{
	size_t n = ar.size();

	cout << setw(10)<<left << "f(x_i)";

	for (auto i = 0; i < n-1; ++i)
	{
		cout << setw(10) <<left<< 'd' + to_string(i+1) + 'f';
	}
	cout << '\n';
	for (const auto& p : ar)
	{
		for (auto i = 0; i < n; ++i)
		{
			if (p[i] != 0)
				cout << setw(10) << left << p[i];
			else
				break;
		}
		cout << '\n';
	}
}

