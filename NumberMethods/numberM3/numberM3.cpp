//лабораторна робота №3
//розвязування сиситем лінійних рівнянь 3 порядку методом Крамера та оберненої матриці

#include "Header.h"
#include "iostream"
#include <vector>
#define mstr(x) #x
using namespace std;
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.setf(ios_base::left, ios_base::adjustfield);
	double A[3][3]{ 0.92, -0.83, 0.62, 0.24, -0.54, 0.43, 0.73, -0.81, -0.67 };
	double b[3]{ 2.15,0.62,0.88 };
	/*for (int i = 0; i < 3; i++)
	{
		cout << cout.width(8) << A[i][0] << cout.width(8)
			<< A[i][1] << cout.width(8) << A[i][2] << " = " << b[i] << endl;
			
	}*/
	//SolveCramer3(A, b);
	//cout << endl;
	SolveInvers3(A, b);
}