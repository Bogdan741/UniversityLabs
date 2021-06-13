#pragma once
#include <iostream>
#include <exception>

typedef double T;

class List {
public:
	enum{MIN = 10};
	//--------------------------------------------------------------------------------
	List();
	List(std::size_t count, const T& b = 0);
	List(const List& other);
	~List();
	//--------------------------------------------------------------------------------
	std::size_t get_count() const;
	T getFirst() const;
	T getLast();
	T max()const;
	T min() const;
	T average() const;
	//--------------------------------------------------------------------------------
	void bubble_sort();
	void selectionD_sort();
	//--------------------------------------------------------------------------------
	List& operator+(const T& a);
	List& operator-(const T& a);//видаляє перший елемент дані якого відповідають значенню а
	const T & operator[](std::size_t i) const;
	T& operator[](std::size_t i);
	List operator*(const T& a) const;
	List& operator=(const List& other);
	//--------------------------------------------------------------------------------
	friend System::Windows::Forms::DataGridView^ operator>>(System::Windows::Forms::DataGridView^ dt, List & l);
	friend System::Windows::Forms::DataGridView^ operator<<(System::Windows::Forms::DataGridView^ dt, const List& l);
	friend System::Windows::Forms::ListBox^ operator>>(System::Windows::Forms::ListBox^ ls, List& l);
	friend System::Windows::Forms::ListBox^ operator<<(System::Windows::Forms::ListBox^ ls, const List& l);
	friend System::Windows::Forms::TextBox^ operator<<(System::Windows::Forms::TextBox^ t, const List& l);
	//--------------------------------------------------------------------------------
	struct Item
	{
		T mData;
		Item* next;
	};
private:
	void swap(Item* node_1, Item* node_2);

	Item* head;
	std::size_t number;
};
