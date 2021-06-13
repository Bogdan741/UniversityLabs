#pragma once

#ifndef _ARRAY_
#define _ARRAY_
#include <iostream>
#include <utility>
#include <initializer_list>
#include <algorithm>

//template<typename T>
//std::ostream& operator<<(std::ostream& os, const T& a);//сумнівно

template <typename T>
class Array {
public:
	Array() = delete;
	Array(std::initializer_list<T> lst) : ar(new T[lst.size()]), sz{lst.size()}
	{
		std::copy(lst.begin(), lst.end(), ar);
	}
	explicit Array(int size0): ar(new T[size0]), sz(size0){}
	Array(int size0, const T & v): ar(new T(v)[size0]), sz(size0){}
	Array(const Array& other);
	~Array();
	//--------------------------------------------------------------------------------
	T sum() const;
	T mult() const;
	T min() const;
	int size() const;
	//--------------------------------------------------------------------------------
	Array<T>& operator=(const Array& other);
	T& operator[](int i);
	T operator[](int i) const;
	//friend std::ostream& operator<< <>(std::ostream& os, const Array<T>& a);
	//--------------------------------------------------------------------------------


private:
	T* ar;
	std::size_t sz;
};


template<typename T>
inline Array<T>::Array(const Array& other)
{
	ar = new T[other.size()];
	for (int i = 0; i < other.size(); i++)
		ar[i] = other.ar[i];
}

template<typename T>
Array<T>::~Array()
{
	delete[]ar;
}

template<typename T>
inline T Array<T>::sum() const
{
	T sum = static_cast<T>(0);
	for (int i = 0; i < sz; i++)
		sum = sum + ar[i];
	return sum;
}

template<typename T>
inline T Array<T>::mult() const
{
	T sum = static_cast<T>(1);
	for (int i = 0; i < sz; i++)
		sum = sum * ar[i];
	return sum;
}

template<typename T>
inline T Array<T>::min() const
{
	T tmp = static_cast<T>(ar[0]);
	for (int i = 0; i < sz; i++)
	{
		if (!(tmp < ar[i]))
			tmp = ar[i];
	}
	return tmp;
}

template<typename T>
inline int Array<T>::size() const
{
	return sz;
}

template<typename T>
inline Array<T>& Array<T>::operator=(const Array& other)
{
	if (other == *this)
		return *this;

	delete[]ar;
	ar = new T[other.size()];
	for (int i = 0; i < other.size(); i++)
		ar[i] = other.ar[i];

	return *this;
}

template<typename T>
inline T& Array<T>::operator[](int i)
{
	return ar[i];
}

template<typename T>
inline T Array<T>::operator[](int i) const
{
	return ar[i];
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const Array<T> & a)//сумнівно
{
	for (int i = 0; i < a.size(); i++)
		os << a[i];
	os << '\n';
	return os;
}



#endif // !__ARRAY_