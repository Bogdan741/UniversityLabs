#include "NewComplex.h"
using namespace mytype;
//--------------------------------------------------------------------------------
Complex& Complex::operator+=(const Complex& r)
{
	a_.get() += r.a_.get();
	b_.get() += r.b_.get();
	return *this;
}
//--------------------------------------------------------------------------------

Complex& Complex::operator-=(const Complex& r)
{
	a_.get() -= r.a_.get();
	b_.get() -= r.b_.get();
	return *this;
}
//--------------------------------------------------------------------------------

bool Complex::operator<(const Complex& other) const
{
	return (a_.get() < other.a_.get());
}
//--------------------------------------------------------------------------------

Complex mytype::operator*(Complex l, const Complex& r)
{
	return l*=r;
}
//--------------------------------------------------------------------------------

Complex mytype::operator+(Complex l, const Complex& r)
{
	return l += r;
}
//--------------------------------------------------------------------------------

Complex mytype::operator-(Complex l, const Complex& r)
{
	return l -= r;
}
//--------------------------------------------------------------------------------
std::ostream& mytype::operator<<(std::ostream& os, const Complex& c)
{
	os << "Real. part: " << c.a_.get() << " Img. part: " << c.b_.get() << '\n';
	return os;
}
//--------------------------------------------------------------------------------

Complex& mytype::Complex::operator*=(const Complex& r)
{
	a_.get() = a_.get() * r.a_.get() - b_.get() * r.b_.get(); 
	b_.get() = a_.get() * r.b_.get() + b_.get() * r.a_.get();
	return *this;
}
//--------------------------------------------------------------------------------

