#include "Header1.h"
#include <exception>
//--------------------------------------------------------------------------------
Vyraz::Vyraz(std::size_t n, std::size_t m, std::size_t k, const double& val) : ar(3)
{
	ar[0].resize(n, val);
	ar[1].resize(m, val);
	ar[2].resize(k, val);
}
//--------------------------------------------------------------------------------
double Vyraz::res(double x) const
{
	if (x >= 100) throw Vyraz::LogarithmError("Must be less than 100\n");
	else if (x < 0) throw Vyraz::SQRTError("Must be greater or equal than 0\n");
	else if (fabs(10-x) < 1E-16) throw Vyraz::ZeroDevisionError("The value cannot be equal to 10\n");
	
	double res{};
	double sum{};
	for (const auto& i : ar[0])
		sum += i;
	res += sum * sqrt(x);
	sum = 0;

	for (const auto& i : ar[1])
		sum += i;
	res += sum * log10(100 - x);
	sum = 0;

	for (const auto& i : ar[2])
		sum += i;
	res += sum / (x - 10);

	return res;
	

}
//--------------------------------------------------------------------------------
std::vector<double>& Vyraz::operator[](std::size_t i)
{
	if (i > 2) throw OverFlow("Out of range\n");
	else return ar[i];
}
//--------------------------------------------------------------------------------
const std::vector<double>& Vyraz::operator[](std::size_t i) const
{
	if (i > 2) throw OverFlow("Out of range\n");
	else return ar[i];
}
//--------------------------------------------------------------------------------
std::istream& operator>>(std::istream& is, Vyraz& v)
//provide basic garantee
{
	char a{};
	int row{0};
	int col{0};

	while (is)
	{
		is >> a;
		if (isdigit(a))
		{
			is.putback(a);
			if (col > v[row].size()-1)
			{
				if (row != 2)
				{
					++row;
					col = 0;
				}
				else
					break;
			}
			is >> v[row][col];
			++col;
		}
		else {
			is.clear(std::istream::failbit);
			throw Vyraz::ErrorSymbol("Unallowed literal, for assign to double\n");
		}
	}
	return is;
}
//--------------------------------------------------------------------------------


