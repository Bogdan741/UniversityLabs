#ifndef _HEADER_
#define _HEADER_
//#include "MyForm.h"
#include <vector>
#include <complex.h>
#include <stdexcept>
#include <cmath>
 
class Polynom {
private:
	double a;
	double b;
	double c;
public:
	enum { UNDIFINITE = INT_MAX };
	struct roots {
		double x1;
		double x2;
	};
	Polynom() :a(0), b(0), c(0){}
	Polynom(double a0, double b0, double c0): a(a0), b(b0), c(c0){}
	Polynom(const Polynom & other): a(other.a), b(other.b), c(other.c){}
	double function(double x) const { return a * x * x + b * x + c; }
	double firstDerivative(double x) const { return 2 * a * x + b; }
	double integral(double x1, double x2)const { return a / 3 * (x2 * x2 * x2 - x1 * x1 * x1) + b / 2 * (x2 * x2 - x1 * x1) + c*(x2 - x1);}

	//геттери і сеттери
	void setattr(double a, double b, double c) { this->a = a; this->b = b, this->c = c; }
	std::vector<double> getattr() const { std::vector<double> res(3); res[0] = a; res[1] = b; res[2] = c; }

	//roots
	roots findRoots() const;
	Polynom operator+(Polynom & other)const { return Polynom(a + other.a, b + other.b, c + other.c); }
	Polynom operator-(Polynom & other)const { return Polynom(a - other.a, b - other.b, c - other.c); }
	friend System::Windows::Forms::Label^ operator<<(System::Windows::Forms::Label^ l, Polynom& p)
	{
		l->Text ="" + p.a + "x^2 + " + p.b + "x + " + p.c;
		return l;
	}
};

Polynom::roots Polynom::findRoots() const
{
	roots r;
	if (a == 0)
	{
		r.x1 = -c / b;
		r.x2 = Polynom::UNDIFINITE;
		return r;
	}
	double des = b * b - 4 * a * c;
	if (des < 0)
	{
		r.x1 = Polynom::UNDIFINITE;
		r.x2 = Polynom::UNDIFINITE;
		return r;
	}
	r.x1 = (-b - sqrt(des)) / (2 * a);
	r.x2 = (-b + sqrt(des)) / (2 * a);
	return r;
}

#endif