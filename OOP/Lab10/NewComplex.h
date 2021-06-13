#pragma once

#ifndef _COMPLEX_
#define _COMPLEX_
#include <iostream>
#include "Wrapper.h"
using Real = Type::NamedType<double, struct RealParametr>;
using Img = Type::NamedType <double, struct ImgParametr>;


class Complex {
public:
	Complex(): a_(0.0), b_(0.0){}
	Complex(Real a, Img b): a_(a), b_(b){}
	Complex(const Complex& other) = default;
	~Complex() = default;

	Complex& operator=(const Complex & other) = default;
	Complex operator*(const Complex& other) const;
	Complex& operator+=(const Complex& r);
	Complex& operator-=(const Complex& r);


	friend Complex operator+(Complex l, const Complex& r);
	friend Complex operator-(Complex l, const Complex& r);
	bool operator<(const Complex& other) const;
	friend std::ostream& operator<<(std::ostream& os, const Complex& c);
private:
	Real a_;
	Img b_;
};

//--------------------------------------------------------------------------------
inline Complex& Complex::operator+=(const Complex& r)
{
	a_.get() += r.a_.get();
	b_.get() += r.b_.get();
	return *this;
}
//--------------------------------------------------------------------------------
inline Complex operator+(Complex l, const Complex& r)
{
	l += r;
	return l;
}
//--------------------------------------------------------------------------------
inline Complex& Complex::operator-=(const Complex& r)
{
	a_.get() -= r.a_.get();
	b_.get() -= r.b_.get();
	return *this;
}
//--------------------------------------------------------------------------------
inline Complex operator-(Complex l, const Complex& r)
{
	l -= r;
	return l;
}
//--------------------------------------------------------------------------------
inline Complex Complex::operator*(const Complex& other) const
{
	return Complex(Real(a_.get()*other.a_.get() - b_.get()*other.b_.get()),
		Img(a_.get()*other.b_.get() + b_.get()*other.a_.get()));
}
//--------------------------------------------------------------------------------
bool Complex::operator<(const Complex& other) const
{
	return (a_.get() < other.a_.get());
}
//--------------------------------------------------------------------------------
std::ostream& operator<<(std::ostream & os, const Complex& c)
{
	os << "Real. part: " << c.a_.get() << " Img. part: " << c.b_.get() << '\n';
	return os;
}
//--------------------------------------------------------------------------------

#endif
