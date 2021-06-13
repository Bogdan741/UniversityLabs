#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>
using namespace std;

void forma(double x, double a, double b, int n)
{
cout << left << setw(3) << n;
cout << left << setw(15) << x;
cout << left << setw(15) << a;
cout << left << setw(15) << b << endl;;
//cout << left << setw(15) << e<<endl;
}
void head(double e)
{
	cout << left << setw(3) << '#';
	cout << left << setw(15) << 'x';
	cout << left << setw(15) << 'a';
	cout << left << setw(15) << 'b';
	cout << left << 'e' << '=' << e << endl;
}
double f(double x)
{
	return x * x * x + 0.2 * x * x + 0.5 * x - 1.2;
}
double f0(double x)
{
	return pow(1.2 - 0.2 * x * x - 0.5 * x, (double)1 / 3);
}
double BiMethod(double a, double b, double e)
{
	//double a0 = a;
	//double b0 = b;
	double x = (a + b) / 2;
	head(e);
	int n = ceil(log2((b - a) / e) - 1);
	for (int i = 1; i <= n + 1; i++)
	{
		if (f(x) == 0)
		{
			return x;
		}
		if (signbit(f(x)) == signbit(f(a)))
			a = x;
		else
			b = x;
		x = (a + b) / 2;
		forma(x, a, b, i);
	}
	return x;
}
double chordMethod(double a, double b, double e)
{
	head(e);
	double p = a;// x_i-1
	double pn = b;//x_i
	int i = 0;
	while (fabs(b - a) > e) {
		a = b - (b - a) * f(b) / (f(b) - f(a));
		forma(a, p, pn, ++i);//для формату
		p = b;//для формату
		pn = a;//для формату
		b = a - (a - b) * f(a) / (f(a) - f(b));
		forma(b, p, pn, ++i);//для формату
		p = a;//для формату
		pn = b;//для формату
	}
	// a, b  i - 1 та і-й члени

	return b;
}
double chordMethod1(double a, double b, double e, bool G)
{
	double tmp;
	int i = 0;
	head(e);
	if (G)//нерухомий б f(б)f''(б) > 0
	{
		do
		{
			tmp = a;
			a = a - f(a) * (b - a) / (f(b) - f(a));
			forma(a, tmp, b, ++i);
		} while (fabs(a - tmp) > e);
		return a;
	}
	else//нерухомий а f(а)f''(а) > 0
	{
		do
		{
			tmp = b;
			b = b - f(b) * (b - a) / (f(b) - f(a));
			forma(b, a, tmp, ++i);
		} while (fabs(b - tmp) > e);
		return b;
	}
}
double Der(double(*f)(double), double x, int n = 1)
{
	double res = 0;
	while (n) {
		double e = 1e-10;
		res = (f(x + e) - f(x)) / e;
		n--;
	}
	return res;
}
double der(double x)
{
	return 3 * x * x + 0.4* x + 0.5;
}
double TangentMethod(double a, double b, double e)
{
	double tmp=0;
	if (f(a) * f(b) < 0)
	{
		if (f(a) * Der(f, a,2)>0)
		{
			tmp = a;
		}
		else if (f(b) * Der(f, b, 2)>0) {
			tmp = b;
		}
		else {
			return 0;
		}
		while (fabs(f(tmp)/der(tmp)) > e)
		{
			tmp = tmp - f(tmp) / der(tmp);
			if (tmp == 0)
			{
				return tmp;
			}
		}
		return tmp;
	}
	return 0;
}
double IteratorProcess(double a, double b, double e)
{
	double x0 = a;
	double x1 = b;
	for(;;)
	{
		x1 = f0(x0);
		if (fabs(x1 - x0) < e) break;
		x0 = x1;
	}
	return x1;

}



int main()
{
	double e = 0.1;
	double a = 0.5;
	double b = 1;
	setlocale(LC_ALL, "rus");
	cout.setf(std::ios::fixed, std::ios::floatfield);
	cout.precision(7);
	cin >> e;
	cout << "Метод дотичних:" << endl;
	auto k = BiMethod(a, b, e);
	cout << "Обчислений корiнь рiвняння: " << k << endl;;
	cout << "Метод послiдовних наближень:" << endl;
	auto z = IteratorProcess(a, b, e);
	cout << "Обчислений корiнь рiвняння: " << z << endl;;
	return 0;
}

