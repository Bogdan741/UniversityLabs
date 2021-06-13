#ifndef _HEADER_
#include <iostream>
#define _HEADER_

class SolveEqApp {
private:
	double eps;
	double a;
	double b;
	double (*f)(double);
protected:
	std::streamsize setFormat();
	void restore(std::streamsize pr, std::ios_base::fmtflags fm);
public:
	SolveEqApp();
	SolveEqApp(double (*f0)(double), double a0, double b0, double e): a(a0), b(b0), eps(e),f(f0) {}
	//double function(double (*f)(double), double x);
	void forma(double x, int n) const;
	double getResult() const;
	double BitMethod() const;
	double ChordMethod(bool fl) const;
	double TangentMethod(bool fl) const;
	double IterationMethod() const;
};

#endif