#include "functions.h"
#include <cmath>
int G_NUMBER_OF_ = 6;
//--------------------------------------------------------------------------------
void get_data(std::vector<double>& x, std::vector<double>& y, std::istream& is)
{
	for (int i = 0; i < G_NUMBER_OF_; i++)
	{
		is >> x[i];
	}
	for (int i = 0; i < G_NUMBER_OF_; i++)
	{
		is >> y[i];
	}
}
//--------------------------------------------------------------------------------
std::vector<double> polinom_n(std::vector<double>& x, std::vector<double>& y, int n)
{
	if (n >= G_NUMBER_OF_)
		throw std::exception("Wrong n\n");

	MyMatrix<double> M(G_NUMBER_OF_, n+1, 0);
	std::vector<double> b = y;
	for (int i = 0; i < G_NUMBER_OF_; i++)
	{
		for (int j = 0; j < n+1; j++)
		{
			M[i][j] = pow(x[i], j);
		}
	}
	return M.least_square(b);
}
//--------------------------------------------------------------------------------
