//#include "Stack.h"
//#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//class Frabjous
//{
//private:
//    char fab[20];
//public:
//    Frabjous(const char* s = "C++") { strcpy(fab, s); }
//    virtual void tell() { cout << fab; }
//};
//
//class Gloam : private Frabjous
//{
//private:
//    int glip;
//public:
//    Gloam(int g = 0, const char* s = "C++") :Frabjous(s), glip(g) {}
//    Gloam(int g, const Frabjous& f) :Frabjous(f), glip(g) {}
//    void tell() { Frabjous::tell(); cout<< endl << glip; }
//};
//
//int main()
//{
//    Gloam a(5, "ro home");
//    a.tell();
//    return 0;
//}
//class A {
//protected: int a;
//public:
//    A(int a0) :a(a0) {}
//    void show() { cout << a; }
//};
//class B : protected A
//{
//
//public:
//    B(int a = 0) : A(a) {}
//    void Show() { A::show(); }
//};
//class C :public B
//{
//public:
//    C(int b = 0):B(b){}
//    void show1() { cout<<a; }
//
//};
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 1000

int* findM(char* str, const char symbol);
void Show(int* A, int n);
int main()
{
	char s[SIZE] = "";
	char symbol = '\0';
	printf("Enter a string and a symbol:\n");
	gets(s);
	symbol = getchar();
	int* pArray = findM(s, symbol);
	Show(pArray, strlen(s));
	free(pArray);
	return 0;

}

int* findM(char* str, const char symbol)
{


	int length = strlen(str);
	int* A = (int*)calloc(length, sizeof(int));
	char* bef = str;
	int i = 0;
	while (1)
	{
		//інваріант: bef вказує на підстрічку після знайденного елемента
		//i-індекс *bef в початковій стрічці

		//Перевірка правильності роботи:
		//Ініціалізація:
		//bef - вказує на початок стрічки, оскільки ще не знайдено жодного вказаного символа
		//i = 0, оскільки *bef - перший символ стрічки 

		//Збереження:
		//bef - вказує на наступний елемент після символа, оскільки s - вказує на наступний знайдений символ
		//то bef += s - bef + 1 зберігає інваріант
		//відповідно і += s - bef + 1.

		//Закінчення:
		//bef = NULL, немає знайдено заданого символа
		char* s = strchr(bef, symbol);
		if (s != NULL)
		{
			for (int j = 1; j <= s - bef; j++)
			{
				if (bef != str && s != NULL)
					A[i + j - 1] = s - bef + 1 - j < j ? s - bef + 1 - j : j;
				else
					A[i + j - 1] = s - bef + 1 - j;
			}
			i += s - bef + 1;
		}
		else if (s == NULL)
		{
			for (int j = 1; j <= length - i; j++)
				A[i + j - 1] = j;
			break;
		}
		bef = s + 1;
	}
	return A;
}

void Show(const int* A, int n)
{
	for (int i = 0; i < n; i++)
		printf("%i  ", A[i]);
}