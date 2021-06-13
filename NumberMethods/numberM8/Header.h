#pragma once
#ifndef _POLY_
#include "polinom.h"
#include <vector>
#include <iomanip>
#include <string>
Polynomial<double> polynom_lan(int n, const std::vector<double>& x, const std::vector<double>& y);
double polynom_lan(int n, const std::vector<double>& x, const std::vector<double>& y, double value);
double polynom_lan_equal(int n, const std::vector<double>& y, double q);
double polynom_n(int n,double h, const std::vector<double>& x, const std::vector<double>& y, double value);
void show_table(const std::vector<std::vector<double>> & ar);
#endif