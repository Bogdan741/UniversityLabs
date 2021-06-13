#pragma once
#ifndef _VYRAZ_
#define _VYRAZ_
#include <vector>
#include <string>
#include <iostream>
#include <exception>

class Vyraz {
public:
	struct ZeroDevisionError : public std::runtime_error
	{
		using std::runtime_error::runtime_error;
	};

	struct LogarithmError : public std::runtime_error
	{
		using std::runtime_error::runtime_error;
	};

	struct SQRTError : public std::runtime_error
	{
		using std::runtime_error::runtime_error;
	};

	struct ErrorSymbol : public std::runtime_error
	{
		using std::runtime_error::runtime_error;
	};

	struct OverFlow : public std::overflow_error
	{
		using std::overflow_error::overflow_error;
	};

	struct TooMuch : public std::overflow_error
	{
		using std::overflow_error::overflow_error;
	};

	Vyraz(std::size_t n, std::size_t m, std::size_t k, const double & val = 0.0) throw(std::bad_alloc);
	double res(double x) const throw(LogarithmError, SQRTError, ZeroDevisionError);

	std::vector<double>& operator[](std::size_t i) throw(OverFlow);
	const std::vector<double>& operator[](std::size_t i)const throw(OverFlow);

private:
	std::vector<std::vector<double>> ar;
};

std::istream& operator>>(std::istream& is, Vyraz& v) throw(Vyraz::ErrorSymbol);
#endif // !_VYRAZ_
