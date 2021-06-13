#include "Header1.h"
#include <locale>


int main()
{
	std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::cout.precision(3);
	setlocale(LC_ALL, "ukr");
	std::cout << "Введiть розмiрнiсть матрицi: " << '\n';
	std::size_t n = 0;
	std::size_t m = 0;
	std::ifstream p;
	p.open("lab6.txt", std::ios_base::in);
	if (std::cin >> m && std::cin>> n)
	{
		MyMatrix<double> M(m, n, 0);
		std::vector<double> b(m, 0);
		if (get(p, M, b))
		{
			

			/*std::cout<<"Розв'язок СЛАР методом Гауса з вибором головного елемента\n";
			auto p1 = M.gauss_with_selection(b);
			std::cout << "Вектор-стовпець розв'язку: \n";
			for (auto x : p1)
			{
				std::cout << x << '\n';
			}

			std::cout<<"Розв'язок СЛАР методом LU-розкладу\n";
			auto p2 = M.solve_with_LUP(b);
			std::cout << "Вектор-стовпець розв'язку: \n";
			
			for (auto x : p2)
			{
				std::cout << x << '\n';
			}*/

			/*for (auto p : M.solve_with_LUP(b))
			{
				std::cout << p << std::endl;
			}
			for (auto p : M.method_of_simple_iteration_of_J(b, 0.001))
			{
				std::cout << p << std::endl;
			}
			std::cout << std::endl;
			for (auto p : M.method_of_Z(b, 0.001))
			{
				std::cout << p << std::endl;
			}*/
			//6
			for (auto p : M.least_square(b))
			{
				std::cout << p << std::endl;
			}
		}
	}
	p.close();
}