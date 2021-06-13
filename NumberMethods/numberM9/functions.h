#pragma once
#ifndef __FUNCT__
#define __FUNCT__

#include "Header.h"
#include <vector>
#include <iostream>
void get_data(std::vector<double> & x, std::vector<double> & y, std::istream & is);
std::vector<double> polinom_n(std::vector<double>& x, std::vector<double>& y, int n);
extern int G_NUMBER_OF_;
#endif // !__FUNCT__
