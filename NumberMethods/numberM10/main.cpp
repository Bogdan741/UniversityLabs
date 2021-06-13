#include "Header.h"
#include <iostream>
#include <locale>
namespace { double A{ 0.0 }; double B{ 2.0 }; int Z{ 2 }; }
using namespace std;
int main()
{
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(5);
	setlocale(LC_ALL, "ukr");
	double eps;
	cin >> eps;
	//Метод лівих прямокутників.
	double h = sqrt(eps);
	for (;;)
	{
		double I1 = integral_left_rec(my_func, A, B, h);
		h /= Z;
		double I2 = integral_left_rec(my_func, A, B, h);
		if (fabs(I1 - I2) < eps) {
			cout << "Метод лiвих прямокутникiв: " << I2
				<< ", кiлькiсть iтерацiй: " << floor(log(sqrt(eps) / h)/log(Z)) <<", крок: "<<h<<", точнiсть: "<<eps<<'\n';
			break;
		}
	}

	//Метод правих прямокутників
	double h1 = sqrt(eps);
	for (;;)
	{
		double I1 = integral_right_rec(my_func, A, B, h1);
		h1 /= Z;
		double I2 = integral_right_rec(my_func, A, B, h1);
		if (fabs(I1 - I2) < eps) {
			cout << "Метод правих прямокутникiв: " << I2
				<< ", кiлькiсть iтерацiй: " << floor(log(sqrt(eps) / h1) / log(Z)) << ", крок: " << h1 << ", точнiсть: " << eps << '\n';;
			break;
		}
	}

	//Метод середній прямокутників
	double h2 = sqrt(eps);
	for (;;)
	{
		double I1 = integral_mid_rec(my_func, A, B, h2);
		h2 /= Z;
		double I2 = integral_mid_rec(my_func, A, B, h2);
		if (fabs(I1 - I2) < eps) {
			cout << "Метод середнiх прямокутникiв: " << I2
				<< ", кiлькiсть iтерацiй: " << floor(log(sqrt(eps) / h2) / log(Z)) << ", крок: " << h2 << ", точнiсть: " << eps << '\n';
			break;
		}
	}

	//Метод трапецій
	double h3 = sqrt(eps);
	for (;;)
	{
		double I1 = integral_trapeze(my_func, A, B, h3);
		h3 /= Z;
		double I2 = integral_trapeze(my_func, A, B, h3);
		if (fabs(I1 - I2) < eps) {
			cout << "Метод трапецiй: " << I2
				<< ", кiлькiсть iтерацiй: " << floor(log(sqrt(eps) / h3) / log(Z)) << ", крок: " << h3 << ", точнiсть: " << eps << '\n';
			break;
		}
	}


	//Метод Сімпсона
	double h4 =pow(eps, 1.0/4.0);// (B - A) / 10.0;
	for (;;)
	{
		double I1 = integral_simps(my_func, A, B, h4);
		h4 /= Z;
		double I2 = integral_simps(my_func, A, B, h4);
		if (fabs(I1 - I2) < eps) {
			cout << "Метод Сiмпсона: " << I2
				<< ", кiлькiсть iтерацiй: " << floor(log(pow(eps, 1.0 / 4.0)/h4)/log(Z)) << ", крок: " << h4 << ", точнiсть: " << eps << '\n';
			break;
		}
	}
}