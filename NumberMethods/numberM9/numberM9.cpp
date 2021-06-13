#include "Header.h"
#include "functions.h"
#include <iostream>
#include <fstream>
#include <locale>
int main() {
	setlocale(LC_ALL, "ukr");
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(4);
	std::vector<double> x(G_NUMBER_OF_);
	std::vector<double> y(G_NUMBER_OF_);
	std::ifstream is;
	is.open("Text.txt");
	if (is.is_open())
	{
		get_data(x, y, is);
		std::cout << "Лiнiйна функцiя \n";
		auto X1 = polinom_n(x, y, 1);
		std::cout << "y = " << X1[1] << "x + " << X1[0]<< "\n";

		std::cout << "Квадратична функцiя \n";
		auto X2 = polinom_n(x, y, 2);
		std::cout << "y = " << X2[2]<<"x^2 + " << X2[1] << "x + " << X2[0] << "\n";

		std::cout << "Кубiчна функцiя \n";
		auto X3 = polinom_n(x, y, 3);
		std::cout << "y = " << X3[3] << "x^3 + " << X3[2] << "x^2 + " << X3[1] << "x + " << X3[0] << "\n";
		
	}

}