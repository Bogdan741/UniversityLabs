// Gar.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <queue>
#include <map>
using namespace std;

bool f1(const string& a, const string& b) { return true; }
template <class T>
void f2(T& i) { cout << "tofofo"; }
int main() {
	int i = 5;
	void* a = &i;
	auto b = static_cast<int*>(a);
	cout << *b;
}