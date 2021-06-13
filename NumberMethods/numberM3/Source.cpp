#include "Header.h"
#include <iostream>
using namespace std;
int one(int n, int i)// (-n)^i
{
	int sum = 1;
	for (int k = 1; k <= i; k++) {
		sum *= n;
	}
	return sum;
}
double determinant(double(*a)[3], int m)
{
	double sum = 0;
	if (m == 1)
	{
		return **a;
	}
	else
	{
		for (int i = 0; i < m; i++)
		{
			double ar[3][3];

			for (int i1 = 0; i1 < m; i1++)
			{
				for (int j1 = 0; j1 < m; j1++)
				{
					if (i1 != 0 && j1 != i)
					{
						if (j1 > i)
						{
							ar[i1 - 1][j1 - 1] = a[i1][j1];
						}
						else {
							ar[i1 - 1][j1] = a[i1][j1];
						}
					}
				}
			}
			sum += one(-1, i) * a[0][i] * determinant(ar, m - 1);
		}
		return sum;
	}
}
void swap(double(*A)[3], int n, double b[], int m)//замінює стовпець з номером н на вектор б
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == n)
			{
				A[i][j] = b[i];
			}
		}
	}
}
void SolveCramer3(double(*A)[3], double* b)
{
	double B[3][3];

	double det = determinant(A, 3);
	double x[3]{};
	cout << "Cramer's rule:\n";
	cout << "Determinant of the matrix: " << det<<endl;
	if (det == 0)
	{
		cout << "Cannot be solved by Crumer's rule because of zero determinant" << endl;
		return;
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				B[i][j] = A[i][j];
			}
		}
		swap(B, i, b, 3);
		x[i] = determinant(B, 3);
		cout << "determinant #" << i+1 << ": " << x[i] << endl;
		x[i] = x[i]/ det;
	}
	cout << "Solutions:\n" << "X1 = "<<x[0]<<endl<<"X2 = "<< x[1] << endl<<"X3 = "<< x[2] << endl;
}

double special(double(*A)[3], int r, int c)//знаходить алгебраїчні доповнення
{
	double b[3][3];
	double res = 0;
	int row = 0;
	for (int i = 0; i < 3; i++)
	{
		int col = 0;
		if (i != r)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i != r && j != c)
				{
					b[row][col] = A[i][j];
					col++;
				}
			}
			row++;
		}
	}
	res = determinant(b, 2);
	return res;
}
void SolveInvers3(double(*A)[3], double* b)
{
	double x[3]{};//корені рівяння
	double B[3][3]{};//обернена матриця
	double det = determinant(A, 3);//детермінант матриці А
	if (det == 0)
	{
		cout << "Cannot be solved by Inverse Matrix method because of zero determinant" << endl;
		return;
	}
	cout << "Inverse method: \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			B[j][i] = one(-1, i + j) * special(A, i, j);//знаходимо алгебраїчні доповнення
			std::cout << "A*[" << i+1 << "][" << j+1 << "] = " << B[j][i] << std::endl;
			B[j][i] /= det;
		}
	}
	std::cout << "Inverse A^-1: " << "\n";
	for (int i = 0; i < 3; i++)//цикл відображає знайдену обернену матрицю
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << B[i][j] << '\t';
		}
		std::cout << '\n';
	}
	for (int i = 0; i < 3; i++)
	{
		x[i] = B[i][0] * b[0] + B[i][1] * b[1] + B[i][2] * b[2];//множення матриці на вектор
	}
	cout << "Solutions:\n" << "X1 = " << x[0] << endl << "X2 = " << x[1] << endl << "X3 = " << x[2] << endl;

}