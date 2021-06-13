#pragma once

#ifndef _COMPLEX_
#define _COMPLEX_
#include <iostream>
#include "Wrapper.h"


namespace mytype {
	using Real = MyType::NamedType<double, struct RealParametr>;
	using Img = MyType::NamedType <double, struct ImgParametr>;


	class Complex {
	public:
		Complex() : a_(0.0), b_(0.0) {}
		Complex(Real a, Img b) : a_(a), b_(b) {}
		Complex(const Complex& r) = default;
		~Complex() = default;

		Complex& operator=(const Complex& r) = default;
		Complex& operator+=(const Complex& r);
		Complex& operator-=(const Complex& r);
		Complex& operator*=(const Complex& r);


		friend Complex operator*(Complex l, const Complex& r);
		friend Complex operator+(Complex l, const Complex& r);
		friend Complex operator-(Complex l, const Complex& r);
		bool operator<(const Complex& other) const;
		friend std::ostream& operator<<(std::ostream& os, const Complex& c);
	private:
		Real a_;
		Img b_;
	};
}
#endif
