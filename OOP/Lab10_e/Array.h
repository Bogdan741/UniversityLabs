#pragma once

#ifndef _ARRAY_
#define _ARRAY_
#include <iostream>
#include <utility>
#include <initializer_list>
#include <algorithm>

namespace mytype {
	template <typename T>
	class Array {
	public:
		//Array() :ar{}, sz{ 0 }{}
		Array(std::initializer_list<T> lst) : ar(new T[lst.size()]), sz{ lst.size() }
		{
			std::copy(lst.begin(), lst.end(), ar);
		}
		explicit Array(std::size_t size0) : ar(new T[size0]), sz(size0) {}
		Array(std::size_t size0, const T& v) : ar(new T(v)[size0]), sz(size0) {}
		Array(const Array& other);
		~Array();
		//--------------------------------------------------------------------------------
		T sum() const;
		T mult() const;
		T min() const;
		std::size_t size() const;
		//--------------------------------------------------------------------------------
		Array<T>& operator=(const Array& other);
		T& operator[](std::size_t i);
		const T& operator[](std::size_t i) const;

	private:
		T* ar;
		std::size_t sz;
	};

	template<typename T>
	std::ostream& operator<<(std::ostream& os, const Array<T>& a);

	//--------------------------------------------------------------------------------

	template<typename T>
	Array<T>::Array(const Array& other)
	{
		ar = new T[other.size()];
		for (int i = 0; i < other.size(); i++)
			ar[i] = other.ar[i];
	}
	//--------------------------------------------------------------------------------

	template<typename T>
	Array<T>::~Array()
	{
		delete[] ar;
	}
	//--------------------------------------------------------------------------------

	template<typename T>
	T Array<T>::sum() const
	{
		T sum{};
		for (int i = 0; i < sz; i++)
			sum = sum + ar[i];
		return sum;
	}
	//--------------------------------------------------------------------------------

	template<typename T>
	T Array<T>::mult() const
	{
		T sum{ar[0]};
		for (int i = 1; i < sz; i++)
			sum = sum * ar[i];
		return sum;
	}
	//--------------------------------------------------------------------------------

	template<typename T>
	T Array<T>::min() const
	{
		T tmp = static_cast<T>(ar[0]);
		for (int i = 0; i < sz; i++)
		{
			if (!(tmp < ar[i]))
				tmp = ar[i];
		}
		return tmp;
	}
	//--------------------------------------------------------------------------------

	template<typename T>
	std::size_t Array<T>::size() const
	{
		return sz;
	}
	//--------------------------------------------------------------------------------

	template<typename T>
	Array<T>& Array<T>::operator=(const Array& other)
	{
		if (other == *this)
			return *this;

		delete[]ar;
		ar = new T[other.size()];
		for (int i = 0; i < other.size(); i++)
			ar[i] = other.ar[i];

		return *this;
	}
	//--------------------------------------------------------------------------------

	template<typename T>
	T& Array<T>::operator[](std::size_t i)
	{
		return ar[i];
	}
	//--------------------------------------------------------------------------------

	template<typename T>
	const T& Array<T>::operator[](std::size_t i) const
	{
		return ar[i];
	}
	//--------------------------------------------------------------------------------

	template<typename T>
	std::ostream& operator<<(std::ostream& os, const Array<T>& a)
	{
		for (int i = 0; i < a.size(); i++)
			os << a[i];
		os << '\n';
		return os;
	}
	//--------------------------------------------------------------------------------


}
#endif // !__ARRAY_