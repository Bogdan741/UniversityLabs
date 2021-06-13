#ifndef _STRT_
#define _STRT
template <class Type>
class Stack
{
private:
	enum {SIZE = 10};
	int stacksize;
	Type* items;
	int top;
public:
	explicit Stack(int ss = SIZE);
	Stack(const Stack& st);
	~Stack();
	bool isempty()const { return top == 0; }
	bool isfull()const { return top == stacksize; }
	bool push(const Type & item);
	bool pop(Type & item);
	Stack & operator=(const Stack& st);
};

template <class Type>
Stack<Type>::Stack<Type>(int ss) : stacksize(ss), top(0)
{
	items = new Type[stacksize];
}

template <class Type>
Stack<Type>::Stack<Type>(const Stack& st)
{
	stacksize = st.stacksize;
	top = st.top;
	items = new Type[stacksize];
	for (int i = 0; i < stacksize; i++)
		items[i] = st.items[t];
}

template <class Type>
Stack<Type>::~Stack<Type>()
{
	delete[] items;
}

template <class Type>
bool Stack<Type>::push(const Type& item)
{
	if (isfull())
		return false;
	else
	{
		items[++top] = item;
		return true;
	}
}

template <class Type>
bool Stack<Type>::pop(Type& item)
{
	if (isempty())
		return false;
	else
	{
		item = items[--top];
		return true;
	}
}

template <class Type>
Stack<Type>& Stack<Type>::operator=(const Stack<Type> & st)
{
	delete[] items;
	stacksize = st.stacksize;
	top = st.top;
	items = new Type[stacksize];
	for (int i = 0; i < stacksize; i++)
		items[i] = st.items[t];
	return *this;
}

#endif