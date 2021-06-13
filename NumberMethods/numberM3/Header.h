#ifndef _HEADER_
#define _HEADER_

double determinant(double(*a)[3], int m);
void swap(double(*A)[3], int n, double b[], int m);
void SolveCramer3(double(*A)[3], double* b);
void SolveInvers3(double(*A)[3], double* b);
double special(double(*A)[3], int i, int j);
int one(int n, int i);
#endif