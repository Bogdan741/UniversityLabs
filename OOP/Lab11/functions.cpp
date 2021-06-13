#include "Header.h"
using namespace std;
//--------------------------------------------------------------------------------
void initialize(std::multimap<int, int>& m, size_t n)
{
	random_device rnd_device;
	mt19937 mersenne_engine{ rnd_device() }; 
	uniform_int_distribution<int> dist{ 1, 100 };

	auto gen = [&dist, &mersenne_engine]() {
		return dist(mersenne_engine);
	};
	vector<int> tmp(2*n);
	generate(tmp.begin(), tmp.end(), gen);
	for (size_t i = 0; i < tmp.size(); i+=2)
	{
		m.emplace(tmp[i], tmp[i + 1]);
	}
}
//--------------------------------------------------------------------------------
void print_multimap(iter beg, iter end)
{
	for (auto & i = beg; i != end; i++) {
		std::cout << "Key :" << (*i).first << " Value: " << (*i).second << '\n';
	}
}
//--------------------------------------------------------------------------------
void del_n_change(std::multimap<int, int>& des, iter beg, iter end, iter p, std::size_t n)
{
	auto b = ++p;
	std::advance(p, n);
	des.erase(b, p);
	des.insert(beg, end);
}
//--------------------------------------------------------------------------------
multimap<int, int, greater<int>> sort_greater(iter beg, iter end)
{
	multimap<int, int, greater<int>> m(beg, end);
	print_multimap(m.begin(), m.end());
	return m;
}
//--------------------------------------------------------------------------------
iter find_proper(iter beg, iter end, std::function<bool(iter)> f)
{
	for (auto i = beg; i != end; ++i)
	{
		if (f(i))
			return i;
	}
	return end;
}
//--------------------------------------------------------------------------------
deque<int> combine_cont(iter beg, iter end, iter1 beg1, iter1 end1)
{
	deque<int> tmp{};
	for (auto i = beg; i != end; ++i)
		tmp.push_back((*i).second);
	for (auto i = beg1; i != end1; ++i)
		tmp.push_back((*i));
	return tmp;
}

//--------------------------------------------------------------------------------

