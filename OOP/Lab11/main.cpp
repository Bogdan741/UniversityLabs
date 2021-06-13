#include "Header.h"
using namespace std;

int main()
{
	
	multimap<int, int> map_object{};
	initialize(map_object, 10);//1
	cout << "After creation" << '\n';
	cout << "-------------------------------------------------" << '\n';

	print_multimap(map_object.begin(), map_object.end());//2
	cout << "-------------------------------------------------" << '\n';
	
	map_object.erase(map_object.begin(), next(map_object.begin(), 5));//3
	map_object.emplace(7, 12);
	map_object.emplace(9, 18);
	map_object.emplace(71, 78);
	map_object.emplace(14, 50);

	cout << "After changes" << '\n';
	cout << "-------------------------------------------------" << '\n';

	print_multimap(map_object.begin(), map_object.end());//4
	cout << "-------------------------------------------------" << '\n';


	multimap<int, int> map_object1{};
	initialize(map_object1, 10);//5

	del_n_change(map_object, map_object1.begin(), map_object1.end(), next(map_object.begin(), 3), 5);//6

	cout << "After deletion and addition" << '\n';
	cout << "-------------------------------------------------" << '\n';

	print_multimap(map_object.begin(), map_object.end());
	cout << "-------------------------------------------------" << '\n';

	print_multimap(map_object1.begin(), map_object1.end());//7
	cout << "-------------------------------------------------" << '\n';

	cout << "After sorting in descending order" << '\n';
	cout << "-------------------------------------------------" << '\n';
	sort_greater(map_object.begin(), map_object.end());//8
	cout << "-------------------------------------------------" << '\n';


	auto val = find_proper(map_object.begin(), map_object.end(), [](iter a) {return (*a).first % 2 == 0; });
	if(val != map_object.end())
		std::cout << "Key :" << (*val).first << " Value: " << (*val).second << '\n';//9
	cout << "-------------------------------------------------" << '\n';


	deque<int> de_ob{};
	
	for (auto i = find_proper(map_object.begin(), map_object.end(),
		[](iter a) {return (*a).first % 2 == 0; }); i != map_object.end();)
	{
		de_ob.push_back((*i).first);
		i = find_proper(++i, map_object.end(), [](iter a) {return (*a).first % 2 == 0; });
	}//10

	cout << "After creation second conteiner" << '\n';
	cout << "-------------------------------------------------" << '\n';
	for_each(de_ob.begin(), de_ob.end(), [](int a) {cout << "Value: " << a << '\n'; });//11
	cout << "-------------------------------------------------" << '\n';


	sort(de_ob.begin(), de_ob.end());//13
	deque<int> v3 = combine_cont(map_object.begin(), map_object.end(), de_ob.begin(), de_ob.end());//15

	cout << "After puting all data from two containers in the third" << '\n';
	cout << "-------------------------------------------------" << '\n';
	for_each(v3.begin(), v3.end(), [](int a) {cout << "Value: " << a << '\n'; });//16
	cout << "-------------------------------------------------" << '\n';

	cout << "Final" << '\n';
	cout << "-------------------------------------------------" << '\n';

	for_each(de_ob.begin(), de_ob.end(), [](int a) {if(a%2==0)cout << "Value: " << a << '\n'; });//17
	cout << "-------------------------------------------------" << '\n';

	

	return 0;
    
    
}