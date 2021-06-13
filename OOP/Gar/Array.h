#pragma once

#ifndef _ARRAY_
#define _ARRAY_
#include <iostream>
#include <utility>
#include <initializer_list>
#include <algorithm>


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


#endif // !__ARRAY_