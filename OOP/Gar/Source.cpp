#include "Array.h"
template<typename T>
Array<T>::~Array()
{
    delete[]ar;
}