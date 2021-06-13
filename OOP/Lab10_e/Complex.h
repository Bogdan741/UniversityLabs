#pragma once
#ifndef _COMPLEX_
#define _COMPLEX_
#include <iostream>
#include "Wrapper.h"

class Complex {
public:
	explicit Complex(double a = 0.0, double b = 0.0): a_(a), b_(b){}
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
	double a_;
	double b_;
};

//--------------------------------------------------------------------------------
inline Complex& Complex::operator+=(const Complex& r)
{
	a_ += r.a_;
	b_ += r.b_;
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
	a_ -= r.a_;
	b_ -= r.b_;
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
	return Complex(a_*other.a_ - b_*other.b_, a_*other.b_ + b_*other.a_);
}
//--------------------------------------------------------------------------------
bool Complex::operator<(const Complex& other) const
{
	return (a_ < other.a_);
}
//--------------------------------------------------------------------------------
std::ostream& operator<<(std::ostream & os, const Complex& c)
{
	os << "Real. part: " << c.a_ << " Img. part: " << c.b_ << '\n';
	return os;
}
//--------------------------------------------------------------------------------


#endif // !_COMPLEX_

