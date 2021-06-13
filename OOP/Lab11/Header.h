#pragma once
#ifndef _AlG_
#define _ALG_
#include <map>
#include <set>
#include <deque>
#include <string>
#include <random>
#include <algorithm>
#include <iostream>
#include <functional>
#include <iterator>
using iter = typename std::multimap<int, int>::iterator;
using iter1 = typename std::deque<int>::iterator;


void initialize(std::multimap<int, int> & m, std::size_t n);
void print_multimap(iter beg, iter end);
void del_n_change(std::multimap<int, int>& des, iter beg, iter end, iter p, std::size_t n);
std::multimap<int, int, std::greater<int>> sort_greater(iter beg, iter end);
iter find_proper(iter beg, iter end, std::function<bool(iter)> f);
std::deque<int> combine_cont(iter beg, iter end, iter1 beg1, iter1 end1);
#endif