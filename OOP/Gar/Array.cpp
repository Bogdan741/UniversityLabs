#include "Array.h"
//using namespace mytype;
//--------------------------------------------------------------------------------

template<typename T>
Array<T>::Array(const Array& other)
{
	ar = new T[other.size()];
	for (int i = 0; i < other.size(); i++)
		ar[i] = other.ar[i];
}

//--------------------------------------------------------------------------------
//template<typename T>
//Array<T>::~Array()
//{
//	delete[]ar;
//}
//template<typename T>
//Array<T>::~Array()
//{
//	delete[] ar;
//}
//--------------------------------------------------------------------------------

template<typename T>
T Array<T>::sum() const
{
	T sum = static_cast<T>(0);
	for (int i = 0; i < sz; i++)
		sum = sum + ar[i];
	return sum;
}
//--------------------------------------------------------------------------------

template<typename T>
T Array<T>::mult() const
{
	T sum = static_cast<T>(1);
	for (int i = 0; i < sz; i++)
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


