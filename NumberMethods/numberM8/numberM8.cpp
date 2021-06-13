#include <iostream>
#include <vector>
#include "polinom.h"
#include <fstream>
#include <locale>
#include "Header.h"

using namespace std;
int main() {
	setlocale(LC_ALL, "ukr");
	ifstream io("lab8.txt");

	vector<double> x(0);
	vector<double> y(0);

	if (io.is_open())
	{
		char ch;
		double tmp;
		while (io.get(ch))
		{
			if (ch == '\n')
				break;
			else
				io.putback(ch);
			io >> tmp;
			x.push_back(tmp);
		}
		while (io >> tmp)
			y.push_back(tmp);
	}
	//cout.setf(ios_base::floatfield, ios_base::fixed);
	//cout.precision(3);
	//cout << "Iнтерпол€цiйной полiномом Ћангранжа дл€ рiвновiддалених вузлiв: " << '\n';
	//cout << "x = "<<3.522<<", y = "<<polynom_lan_equal(y.size(),y,0.022/0.05)<<'\n';
	////cout <<  polynom_lan(y.size(), x, y)<<"\n";
	//cout << "Iнтерпол€цiйний полiномом Ќьютона дл€ рiвновiддалених вузлiв вперед: " << '\n';
	//cout << "x = " << 3.522 << ", y = " << polynom_n(x.size(), x[1] - x[0], x, y, 3.522) << "\n";
	//cout << polynom_lan(y.size(), x, y);

	vector<double> x1 {1, 6, 8, 12};
	vector<double> y1{ 5, 3, 7, 9 };
	//cout << "“очки: " << x1[0] << ';' << y1[0] <<"   "<< x1[1] << ';' << y1[1] << "   " << x1[2] << ';' << y1[2] << endl;
	cout << "Iнтерпол€цi€ многочленом Ћангранжа: " << endl;
	cout << polynom_lan(y1.size(), x1, y1, 3);
	return 0;
}