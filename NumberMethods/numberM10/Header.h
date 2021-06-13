#pragma once
#include <functional>
#include <cmath>
using std::function;

double integral_left_rec(function<double(double)> f, double a, double b, double h);
double integral_right_rec(function<double(double)> f, double a, double b, double h);
double integral_mid_rec(function<double(double)> f, double a, double b, double h);
double integral_simps(function<double(double)> f, double a, double b, double h);
double integral_trapeze(function<double(double)> f, double a, double b, double h);

double my_func(double x);