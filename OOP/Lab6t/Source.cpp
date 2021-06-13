#include "Header.h"
double Polynom::firstDerivative(double x) const
{
	return 2 * a * x + b;
}

double Polynom::integral(double x1, double x2) const
{
	return a / 3 * (x2 * x2 * x2 - x1 * x1 * x1) + b / 2 * (x2 * x2 - x1 * x1) + c * (x2 - x1);
}

Polynom Polynom::operator+(Polynom& other)const {
	return Polynom(a + other.a, b + other.b, c + other.c);
}
Polynom Polynom::operator-(Polynom& other)const {
	return Polynom(a - other.a, b - other.b, c - other.c);
}
double Polynom::operator()(double x)const {
	return a * x * x + b * x + c;
}
void Polynom::operator!() {
	a = -a; b = -b; c = -c;
}
bool Polynom::operator==(const Polynom& other) const {
	return a == other.a && b == other.b && c == other.c;
}

double Polynom::operator[](int i)const
{
	if (0 < i || i > 2)
		throw "Bad input";
	if (i == 0)
		return a;
	else if (i == 1)
		return b;
	else if (i == 2)
		return c;
}

Polynom Polynom::operator*(int var) const
{
	return Polynom(var * a, var * b, var * c);
}

Polynom::roots Polynom::findRoots() const
{
	roots r;
	if (a == 0)
	{
		r.x1 = -c / b;
		r.x2 = Polynom::UNDIFINITE;
		return r;
	}
	double des = b * b - 4 * a * b;
	if (des < 0)
	{
		r.x1 = Polynom::UNDIFINITE;
		r.x2 = Polynom::UNDIFINITE;
		return r;
	}
	r.x1 = (-b - sqrt(des)) / (2 * a);
	r.x1 = (-b + sqrt(des)) / (2 * a);
	return r;
}

void Polynom::setattr(double a, double b, double c)
{
	this->a = a; this->b = b, this->c = c;
}

std::vector<double> Polynom::getattr() const
{
	std::vector<double> res(3); res[0] = a; res[1] = b; res[2] = c;
	return res;
}

System::Windows::Forms::Label^ operator<<(System::Windows::Forms::Label^ l, Polynom& p)
{

	l->Text = "P(x) = " + p.a + "x^2 + " + p.b + "x + " + p.c;
	return l;

}

std::istream& operator>>(std::istream& is, Polynom& p)
{
	is >> p.a >> p.b >> p.c;
	return is;
}

Polynom operator*(double var, const Polynom& p)
{
	return Polynom(var * p.a, var * p.b, var * p.c);
}
