#pragma once
#ifndef _HEADER_
#define _HEADER_
#include <iostream>
#include <vector>
#include <exception>

//#include "function.h"
template <typename T = double>
class MyMatrix {
private:
	std::size_t mrows;
	std::size_t mcols;
	std::vector<std::vector<T>> m_mat;

public:
	MyMatrix(std::size_t n, std::size_t m, const T& v);
	MyMatrix(const MyMatrix<T>& other);

	std::vector<T>& operator[](std::size_t i) noexcept;
	const std::vector<T>& operator[](std::size_t i) const noexcept;
	MyMatrix<T> operator+(const MyMatrix& other) const;
	MyMatrix<T> operator*(const MyMatrix& other) const;
	std::vector<T> operator*(const std::vector<T>& b) const;
	//bool operator bool() const;

	std::size_t getRow() const;
	std::size_t getCol() const;
	MyMatrix<T> transpose() const;

	void show(const std::vector<T>& b) const;
	void show() const;
	void showLU() const;

	bool isSquare() const noexcept;
	bool is_suitable_for_mult(const MyMatrix<T>& other) const;
	//bool is_positive_definite() const;
	void swapRows(std::size_t i, std::size_t j);

	std::vector<T> gauss_with_selection(std::vector<T> b);
	std::pair<MyMatrix<T>, std::vector<T>> LUP_decomposition() const;
	std::vector<T> solve_with_LUP(std::vector<T> b) const;
	std::vector<T> solve_with_method_of_square_root(std::vector<T> b) const;
	std::vector<T> least_square(std::vector<T> b) const;
	std::vector<T> method_of_simple_iteration_of_J(std::vector<T> b, T epsilon) const;
	std::vector<T> method_of_Z(std::vector<T> b, T epsilon) const;
	T determinant() const;



	friend std::istream& operator>>(std::istream& is, MyMatrix<T>& m);
};
template <typename T>
T MyABS(const std::vector<T>& b)
{
	T sum = static_cast<T>(0);
	for (auto x : b)
	{
		sum += x * x;
	}
	return sqrt(sum);
}
template <typename T>
std::istream& get(std::istream& is, MyMatrix<T>& M, std::vector<T>& b)
{

	for (std::size_t i = 0; i < M.getRow(); i++)
	{
		for (std::size_t j = 0; j < M.getCol(); j++)
		{
			is >> M[i][j];
		}
		is >> b[i];
	}
	//передбачити неправильний ввід... вже передбачено)
	return is;
}

template <typename T>
MyMatrix<T>::MyMatrix(std::size_t n, std::size_t m, const T& v) : mrows(n), mcols(m), m_mat(mrows)
{
	for (std::size_t i = 0; i < n; i++)
	{
		m_mat[i].resize(m, v);
	}
}
template <typename T>
MyMatrix<T>::MyMatrix(const MyMatrix<T>& other) : mrows(other.mrows), mcols(other.mcols), m_mat(other.m_mat)
{
}

template <typename T>
std::vector<T>& MyMatrix<T>::operator[](std::size_t i) noexcept
{
	return m_mat[i];
}


template <typename T>
const std::vector<T>& MyMatrix<T>::operator[](std::size_t i) const noexcept
{
	return m_mat[i];
}

template <typename T>
MyMatrix<T> MyMatrix<T>::operator+(const MyMatrix& other) const
{

}

template <typename T>
MyMatrix<T> MyMatrix<T>::operator*(const MyMatrix& other) const
{
	if (!is_suitable_for_mult(other))
	{
		throw std::runtime_error("Cannot multiplay\n");
	}

	std::size_t n = mrows;
	std::size_t m = other.mcols;

	MyMatrix<T> res(n, m, 0);
	for (std::size_t i = 0; i < n; i++)
	{
		for (std::size_t j = 0; j < m; j++)
		{
			for (std::size_t k = 0; k < mcols; k++)
			{
				res[i][j] += m_mat[i][k] * other.m_mat[k][j];
			}
		}
	}

	return res;
}

template <typename T>
std::vector<T> MyMatrix<T>::operator*(const std::vector<T>& b) const
{
	if (!(b.size() == mcols))
	{
		throw std::runtime_error("Cannot multiplay\n");
	}
	std::vector<T> b_c(mrows, 0);
	for (std::size_t i = 0; i < mrows; i++)
	{
		for (std::size_t k = 0; k < mcols; k++)
		{
			b_c[i] += m_mat[i][k] * b[k];
		}
	}
	return b_c;

}
template <typename T>
std::size_t MyMatrix<T>::getRow() const
{
	return mrows;
}


template <typename T>
std::size_t MyMatrix<T>::getCol() const
{
	return mcols;
}

template <typename T>
MyMatrix<T> MyMatrix<T>::transpose() const
{
	MyMatrix<T> res = MyMatrix<T>(mcols, mrows, 0);
	for (std::size_t i = 0; i < mrows; i++)
	{
		for (std::size_t j = 0; j < mcols; j++)
		{
			res[j][i] = m_mat[i][j];
		}
	}
	return res;
}

template <typename T>
bool MyMatrix<T>::isSquare() const noexcept
{
	return mrows == mcols;
}

template <typename T>
bool MyMatrix<T>::is_suitable_for_mult(const MyMatrix<T>& other) const
{
	return mcols == other.mrows;
}
template <typename T>
void MyMatrix<T>::swapRows(std::size_t i, std::size_t j)
{
	auto p = m_mat[i];
	m_mat[i] = m_mat[j];
	m_mat[j] = p;
}


template <typename T>
void MyMatrix<T>::show(const std::vector<T>& b) const
{
	std::cout << "------------------------------------------------------------" << '\n';
	for (std::size_t n = 0; n < mrows; n++)
	{
		for (std::size_t m = 0; m < mcols; m++)
		{
			std::cout.width(8);
			std::cout << std::left << m_mat[n][m] << '\t';
		}
		std::cout.width(10);
		std::cout << std::left << b[n] << '\n';
	}
	std::cout << "------------------------------------------------------------" << '\n';
}

template<typename T>
inline void MyMatrix<T>::show() const
{
	std::cout << "------------------------------------------------------------" << '\n';
	for (std::size_t n = 0; n < mrows; n++)
	{
		for (std::size_t m = 0; m < mcols; m++)
		{
			std::cout.width(8);
			std::cout << std::left << m_mat[n][m] << '\t';
		}
		std::cout << "\n";
	}
	std::cout << "------------------------------------------------------------" << '\n';
}

template<typename T>
inline void MyMatrix<T>::showLU() const
{
	MyMatrix<T> L(mrows, mcols, 0);
	MyMatrix<T> U(mrows, mcols, 0);
	for (std::size_t i = 0; i < mrows; i++)
	{
		for (std::size_t j = 0; j < mcols; j++)
		{
			if (j >= i)
			{
				U[i][j] = m_mat[i][j];
			}
			else
			{
				L[i][j] = m_mat[i][j];
			}
			if (i == j)
			{
				L[i][j] = 1;
			}
		}
	}
	std::cout << "L:\n";
	L.show();
	std::cout << "U:\n";
	U.show();
}


template <typename T>
std::vector<T> MyMatrix<T>::gauss_with_selection(std::vector<T> b)
{
	MyMatrix<T> m_copy = *this;
	if (!isSquare() || mcols != b.size())
	{
		throw std::runtime_error("Error not a square matrix");
	}
	m_copy.show(b);
	for (std::size_t i = 0; i < mrows - 1; i++)
	{
		T maxI = m_copy[i][i];
		std::size_t indexMaxI = i;
		for (std::size_t j = i; j < mcols; j++)
		{
			if (fabs(maxI) < fabs(m_copy[j][i]))
			{
				indexMaxI = j;
				maxI = m_copy[j][i];
			}
		}
		if (fabs(maxI) < 1E-16)
		{
			throw std::runtime_error("Singular matrix\n");
		}
		m_copy.swapRows(i, indexMaxI);
		T p = b[i];
		b[i] = b[indexMaxI];
		b[indexMaxI] = p;
		for (std::size_t m = i; m < m_copy.mrows; m++)
		{
			std::size_t k = m_copy.mrows - 1 + i - m;
			T mI = m_copy[k][i] / maxI;
			for (std::size_t z = i; z < m_copy.mrows; z++)
			{
				if (k != i)
				{
					m_copy[k][z] -= mI * m_copy[i][z];
				}
				else {
					m_copy[i][z] /= maxI;
				}
			}
			if (k != i)
				b[k] -= mI * b[i];
			else
				b[i] /= maxI;
		}

		m_copy.show(b);
	}
	std::vector<T> a(m_copy.mrows);
	for (std::size_t i = m_copy.mrows; i >= 1; i--)
	{
		a[i - 1] = b[i - 1] / m_copy[i - 1][i - 1];
		for (std::size_t j = m_copy.mrows - 1; j > i - 1; j--)
		{
			a[i - 1] -= m_copy[i - 1][j] * a[j] / m_copy[i - 1][i - 1];
		}
	}
	return a;
}


template<typename T>
std::pair<MyMatrix<T>, std::vector<T>> MyMatrix<T>::LUP_decomposition() const
{
	MyMatrix<T> m_copy = *this;
	std::size_t n = mrows;
	std::vector<T> p(n);
	for (std::size_t x = 0; x < n; x++)
		p[x] = x;
	for (std::size_t k = 0; k < n; k++)
	{
		T m = 0;
		std::size_t indexM = k;

		for (std::size_t i = k; i < n; i++)//шукаємо елемент з найбільшим модулем
		//в стовпці к для всіх рядків к та більше
		{
			if (fabs(m_copy[i][k]) > m)
			{
				m = fabs(m_copy[i][k]);
				indexM = i;
			}
		}
		if (fabs(m) < 1E-16)//еквівалентно тому що дорівнює нуль
			throw std::runtime_error("Singular matrix");
		T tmp = p[k];
		p[k] = p[indexM];
		p[indexM] = tmp;
		m_copy.swapRows(k, indexM);
		for (std::size_t i = k + 1; i < n; i++)
		{
			m_copy[i][k] = m_copy[i][k] / m_copy[k][k];
			for (std::size_t j = k + 1; j < n; j++)
			{
				m_copy[i][j] = m_copy[i][j] - m_copy[i][k] * m_copy[k][j];
			}
		}
	}
	return std::pair<MyMatrix<T>, std::vector<T>>(m_copy, p);
}


template<typename T>
std::vector<T> MyMatrix<T>::solve_with_LUP(std::vector<T> b) const
{
	std::pair<MyMatrix<T>, std::vector<T>> pa = LUP_decomposition();
	pa.first.show(pa.second);
	std::size_t n = pa.first.getRow();
	std::vector<T> x(n), y(n);
	pa.first.showLU();
	for (std::size_t i = 0; i < n; i++) // solve for Ly = Pb
	{
		y[i] = b[pa.second[i]];
		for (std::size_t j = 0; j < i; j++)
		{
			y[i] -= pa.first[i][j] * y[j];
		}
	}
	for (std::size_t i = n - 1;; i--) // solve for Ux = y;
	{
		x[i] = y[i];
		for (std::size_t j = i + 1; j < n; j++)
		{
			x[i] -= pa.first[i][j] * x[j];
		}
		x[i] /= pa.first[i][i];
		if (i == 0)
			break;
	}

	return x;
}


template <typename T>
std::istream& operator>>(std::istream& is, MyMatrix<T>& m)
{
	std::size_t index;
	if (is >> index)
	{
		for (std::size_t i = 0; i < m.mcols; i++)
		{
			is >> m.m_mat[index][i];
		}
	}
	return is;
}


template <typename T>
std::vector<T> MyMatrix<T>::solve_with_method_of_square_root(std::vector<T> b) const
{
	if (determinant() <= 0)
		throw std::runtime_error("Cannot be solved. Is not positive definite\n");
	std::vector<T> res(b.size(), 0);
	MyMatrix<T> s(mrows, mcols, 0);
	std::size_t n = mrows;

	//when i = 1
	s[0][0] = sqrt(m_mat[0][0]);
	for (std::size_t i = 1; i < n; i++) {
		s[0][i] = m_mat[0][i] / s[0][0];
	}

	for (std::size_t i = 1; i < n; i++) {
		T sum = 0;
		for (std::size_t k = 0; k < i; k++) {
			sum += s[k][i] * s[k][i];
		}
		s[i][i] = sqrt(m_mat[i][i] - sum);

		T l = 1 / (s[i][i]);
		for (std::size_t j = i + 1; j < n; j++) {
			T SDSsum = 0;
			for (std::size_t k = 0; k < i; k++) {
				SDSsum += s[k][i] * s[k][j];
			}
			s[i][j] = l * (m_mat[i][j] - SDSsum);
		}
	}

	//solve for Ly = b;
	std::vector<T> y(b.size(), 0);
	std::vector<T> x(b.size(), 0);
	s = s.transpose();
	for (std::size_t i = 0; i < n; i++)
	{
		y[i] = b[i];
		for (std::size_t j = 0; j < i; j++)
		{
			y[i] = y[i] - s[i][j] * y[j];
		}
		y[i] = y[i] / s[i][i];
	}

	MyMatrix<T> s_t = s.transpose();
	for (std::size_t i = n; i >= 1; i--)
	{
		x[i-1] = y[i - 1];
		for (std::size_t j = n; j > i; j--)
		{
			x[i - 1] -= s_t[i - 1][j - 1] * x[j - 1];
		}
		x[i - 1] /= s_t[i - 1][i - 1];
	}
	return x;
}
template <typename T>
std::vector<T> MyMatrix<T>::least_square(std::vector<T> b) const
{
	MyMatrix<T> A_T = transpose();
	MyMatrix<T> N = A_T * (*this);
	std::vector<T> c = A_T * b;
	return N.solve_with_method_of_square_root(c);
}

template <typename T>
std::vector<T> MyMatrix<T>::method_of_simple_iteration_of_J(std::vector<T> b, T epsilon) const
{
	//ще має бути код, що перевіряє збіжність процесу
	if (mrows != b.size)
		throw std::runtime_error("Wrong input\n");
	std::size_t n = b.size();
	std::vector<T> beta(n, 0);
	MyMatrix<T> alpha(mrows, mcols, 0);
	for (std::size_t i = 0; i < n; i++)
	{
		if (fabs(m_mat[i][i]) < 1E-16)
			throw std::runtime_error("Cannot divide over zero. Cannot be solved by Jcobi method\n");
		beta[i] = b[i] / m_mat[i][i];
		for (std::size_t j = 0; i < n; j++)
		{
			if (j != i)
				alpha[i][j] = -m_mat[i][j] / m_mat[i][i];
		}
	}
	std::vector<T> X(n, 0);
	std::vector<T> tmp(beta.begin(), beta.end());
	for (;;)
	{
		auto z = alpha * tmp;
		for (std::size_t i = 0; i < n; i++)
		{
			X[i] = beta[i] + z[i];
		}
		std::vector<T> e(n, 0);
		for (std::size_t i = 0; i < n; i++)
		{
			e[i] = X[i] - tmp[i];
		}
		if (MyABS(e) < epsilon)
			break;
		tmp = X;
	}
	return X;
}

template <typename T>
std::vector<T> MyMatrix<T>::method_of_Z(std::vector<T> b, T epsilon) const
{
	//ще має бути код, що перевіряє збіжність процесу
	if (mrows != b.size)
		throw std::runtime_error("Wrong input\n");
	std::size_t n = b.size();
	std::vector<T> beta(n, 0);
	MyMatrix<T> alpha(mrows, mcols, 0);
	for (std::size_t i = 0; i < n; i++)
	{
		if (fabs(m_mat[i][i]) < 1E-16)
			throw std::runtime_error("Cannot divide over zero. Cannot be solved by Zendel method\n");
		beta[i] = b[i] / m_mat[i][i];
		for (std::size_t j = 0; i < n; j++)
		{
			if (j != i)
				alpha[i][j] = -m_mat[i][j] / m_mat[i][i];
		}
	}

	std::vector<T> X(n, 0);
	std::vector<T> tmp(beta.begin(), beta.end());
	for (;;)
	{
		for (std::size_t i = 0; i < n; i++) //знаходить наступний вектор розвязків
		{
			X[i] = beta[i];
			for (std::size_t j = 1; j < i; j++)
			{
				X[i] += alpha[i][j - 1] * X[j - 1];
			}
			for (std::size_t j = i + 1; j < n; j++)
			{
				X[i] += alpha[i][j] * tmp[j];
			}

		}
		std::vector<T> e(n, 0);
		for (std::size_t i = 0; i < n; i++)
		{
			e[i] = X[i] - tmp[i];
		}
		if (MyABS(e) < epsilon)
			break;
		tmp = X;
	}
	return X;
}

template<typename T>
inline T MyMatrix<T>::determinant() const
{
	return 1;
}

#endif