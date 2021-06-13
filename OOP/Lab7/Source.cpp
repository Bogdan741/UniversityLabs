#include "Header.h"

//--------------------------------------------------------------------------------
List::List()
{
	head = nullptr;
	number = 0;
}
//--------------------------------------------------------------------------------
List::List(std::size_t count, const T& b)
{
	List::Item* prev = head;
	List::Item* tmp;
	for (std::size_t i = 0; i < count; i++)
	{
		try
		{
			tmp = new Item[1];
		}
		catch (const std::bad_alloc& e)
		{
			std::cout << "Memory Allocation"
				<< " is failed: "
				<< e.what()
				<< std::endl;
			return;
		}
		tmp->mData = b;
		if (prev != head)
		{
			prev->next = tmp;
		}
		prev = tmp;
	}
	prev->next = nullptr;
	number = count;
}
//--------------------------------------------------------------------------------
List::List(const List & other )
{
	List::Item* prev = head;
	List::Item* tmp;
	for (std::size_t i = 0; i < other.number; i++)
	{
		try
		{
			tmp = new Item [1];
		}
		catch (const std::bad_alloc& e)
		{
			std::cout << "Memory Allocation"
				<< " is failed: "
				<< e.what()
				<< std::endl;
			return;
		}
		tmp->mData = other[i];
		if (prev != head)
		{
			prev->next = tmp;
		}
		prev = tmp;
	}
	prev->next = nullptr;
	number = other.number;
}
//--------------------------------------------------------------------------------
List& List::operator=(const List & other)
{
	if (this == &other)
	{
		return *this;
	}
	
	Item* tz = head;
	while (tz)
	{
		*this - tz->mData;
	}

	List::Item* prev = head;
	List::Item* tmp;
	for (std::size_t i = 0; i < other.number; i++)
	{
		tmp->mData = other[i];
		if (prev != head)
		{
			prev->next = tmp;
		}
		prev = tmp;
	}
	prev->next = nullptr;
	number = other.number;
}
//--------------------------------------------------------------------------------
List::~List()
{
	List::Item* tmp;
	while (head != nullptr)
	{
		tmp = head;
		head = tmp->next;
		delete[] tmp;
	}

}
//--------------------------------------------------------------------------------
std::size_t List::get_count() const
{
	return number;
}
//--------------------------------------------------------------------------------
T List::getFirst() const
{
	return head->mData;
}
//--------------------------------------------------------------------------------
T List::getLast()
{
	List::Item* tmp = head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	return tmp->mData;
}
//--------------------------------------------------------------------------------
T List::max() const
{
	if (number == 0)
	{
		return static_cast<T>(0);
	}
	List::Item* tmp = head;
	T res = head->mData;
	while (tmp != NULL)
	{
		if (tmp->mData > res)
		{
			res = tmp->mData;
		}
		tmp = tmp->next;
	}
	return res;
}
//--------------------------------------------------------------------------------
T List::min() const
{
	if (number == 0)
	{
		return static_cast<T>(0);
	}
	List::Item* tmp = head;
	T res = head->mData;
	while (tmp != NULL)
	{
		if (!(tmp->mData > res))
		{
			res = tmp->mData;
		}
		tmp = tmp->next;
	}
	return res;
}
//--------------------------------------------------------------------------------
T List::average() const
{
	List::Item* tmp = head;
	T res = 0;
	while (tmp != NULL)
	{
		res += tmp->mData;
		tmp = tmp->next;
	}
	return res/number;
}
//--------------------------------------------------------------------------------
void List::swap(Item* node_1, Item* node_2)
{
	int temp = node_1->mData;
	node_1->mData = node_2->mData;
	node_2->mData = temp;
}
//--------------------------------------------------------------------------------
List& List::operator+(const T & a)
{
	//if list is empty
	List::Item* to_add;
	if (!head)
	{
		to_add = new Item[1];
		to_add->mData = a;
		to_add->next = nullptr;
		head = to_add;
		++number;
		return *this;

	}

	//The other cases
	List::Item* tmp = head;
	while (tmp->next != nullptr)
	{
		tmp = tmp->next;
	}
	try
	{
		to_add = new Item[1];
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Memory Allocation"
			<< " is failed: "
			<< e.what()
			<< std::endl;
		return *this;
	}
	to_add->mData = a;
	to_add->next = nullptr;
	if (tmp == nullptr)
	{
		head = to_add;
	}
	else
	{
		tmp->next = to_add;
	}
	number++;
	return *this;
}
//--------------------------------------------------------------------------------
List& List::operator-(const T& a)
{
	Item* pPrev;
	Item* pCur = head;
	while (pCur != nullptr)
	{
		if (pCur->mData == a)
		{
			if (pCur == head)
			{
				head = head->next;
				delete [] pCur;
				pCur = head;
				
			}
			else
			{
				pPrev->next = pCur->next;
				delete [] pCur;
				pCur = pPrev->next;
				
			}
			number--;
			return *this;

		}
		else
		{
			pPrev = pCur;
			pCur = pCur->next;
		}
	}
	return *this;
}
//--------------------------------------------------------------------------------
const T& List::operator[](std::size_t i) const
{
	
	if (i+1 > number) {
		throw std::exception("Overflow\n"); //допрацювати
	}

	List::Item* tmp = head;
	for (std::size_t j = 0; j < i; j++)
	{
		tmp = tmp->next;
	}
	return tmp->mData;
}
//--------------------------------------------------------------------------------
T& List::operator[](std::size_t i)
{
	if (i + 1 > number) {
		throw std::exception("Overflow\n"); //допрацювати
	}

	List::Item* tmp = head;
	for (std::size_t j = 0; j < i; j++)
	{
		tmp = tmp->next;
	}
	return tmp->mData;
}
//--------------------------------------------------------------------------------
List List::operator*(const T& a) const
{
	List res = *this;
	Item* tmp = res.head;
	while (tmp != nullptr)
	{
		tmp->mData= tmp->mData * a;
		tmp = tmp->next;
	}
	return res;
}
//--------------------------------------------------------------------------------
void List::bubble_sort()
{
	int swapped = 0;
	Item* lPtr; // left pointer will always point to the start of the list
	Item* rPrt = NULL; // right pointer will always point to the end of the list
	do
	{
		swapped = 0;
		lPtr = head;
		while (lPtr->next != rPrt)
		{
			if (lPtr->mData > lPtr->next->mData)
			{
				swap(lPtr, lPtr->next);
				swapped = 1;
			}
			lPtr = lPtr->next;
		}
		//as the largest element is at the end of the list, assign that to rPtr as there is no need to
		//check already sorted list
		rPrt = lPtr;
	} while (swapped);
}
//--------------------------------------------------------------------------------
void List::selectionD_sort()
{
	for (int j = 1; j < number; j++)
	{
		T key = (*this)[j];
		int i = j - 1;
		while (i>=0 && (*this)[i] < key)
		{
			(*this)[i + 1] = (*this)[i];
			i = i - 1;
		}
		(*this)[i + 1] = key;
	}
}
//--------------------------------------------------------------------------------
System::Windows::Forms::DataGridView^ operator>>(System::Windows::Forms::DataGridView^ dt, List& l)
{
	for (int i = 0; i < dt->RowCount; i++)
	{
		try
		{
			l + System::Convert::ToDouble(dt->Rows[i]->Cells[0]->Value);
		}
		catch (System::ArgumentException^ e)
		{
			System::Windows::Forms::MessageBox::Show(e->GetType()->Name + e->Message);
		}
	}
	return dt;
}
//--------------------------------------------------------------------------------
System::Windows::Forms::DataGridView^ operator<<(System::Windows::Forms::DataGridView^ dt, const List& l)
{
	if (dt->ColumnCount == 1)
	{
		dt->Columns->RemoveAt(0);
	}
	dt->ColumnCount = 1;
	dt->Columns[0]->Name = "y";
	dt->Columns[0]->HeaderText = "Result";
	dt->Columns[0]->Width = dt->Width;
	List::Item* tmp = l.head;
	while (tmp)
	{
		int i = dt->Rows->Add(1);
		dt->Rows[i]->Cells[0]->Value = System::Convert::ToString(tmp->mData);
		tmp = tmp->next;
	}
	return dt;
}
//--------------------------------------------------------------------------------
System::Windows::Forms::ListBox^ operator>>(System::Windows::Forms::ListBox^ ls, List& l)
{
	for (int i = 0; i < ls->Items->Count; i++)
	{

		try
		{
			l + System::Convert::ToDouble(ls->Items[i]);
		}
		catch (System::ArgumentException^ e)
		{
			System::Windows::Forms::MessageBox::Show(e->GetType()->Name + e->Message);
		}
	}
	return ls;
}
//--------------------------------------------------------------------------------
System::Windows::Forms::ListBox^ operator<<(System::Windows::Forms::ListBox^ ls, const List& l)
{
	ls->ClearSelected();
	List::Item* tmp = l.head;
	for (int i = 0; i < l.number; i++) {
		ls->Items->Insert(i, System::Convert::ToString(tmp->mData));
		tmp = tmp->next;
	}
	return ls;
}
//--------------------------------------------------------------------------------
System::Windows::Forms::TextBox^ operator<<(System::Windows::Forms::TextBox^ t, const List& l)
{
	t->Clear();
	List::Item* tmp = l.head;
	while(tmp) {
		t->Text += System::Convert::ToString(tmp->mData) + System::Environment::NewLine;
		tmp = tmp->next;
	}
	return t;
}
//--------------------------------------------------------------------------------