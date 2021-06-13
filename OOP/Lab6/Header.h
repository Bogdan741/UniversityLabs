#ifndef _HEADER_
#define _HEADER_
#include <vector>
#include <sstream>
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
	static unsigned int field;


	Polynom() :a(0), b(0), c(0) { field++; }
	Polynom(double a0, double b0, double c0) : a(a0), b(b0), c(c0) { field++; }
	Polynom(const Polynom& other) : a(other.a), b(other.b), c(other.c) { field++; }
	~Polynom() { field--; }

	static unsigned int show_count() { return field; };


	double firstDerivative(double x)const;
	double integral(double x1, double x2)const;
	roots findRoots() const;

	void setattr(double a, double b, double c);
	std::vector<double> getattr() const;
	
	
	Polynom operator+(Polynom& other)const;
	Polynom operator-(Polynom& other)const;
	double operator()(double x)const;
	void operator!();
	bool operator==(const Polynom& other) const;
	double operator[](int i) const;
	double & operator[](int i);
	Polynom operator*(int var) const;

	friend System::Windows::Forms::Label^ operator<<(System::Windows::Forms::Label^ l, Polynom& p);
	friend std::istream& operator>>(std::istream& is, Polynom& p);

	friend Polynom operator*(double var, const Polynom& p);
};
#endif
