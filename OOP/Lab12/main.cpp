#include "Header1.h"
#include <sstream>
#include <limits>

using namespace std;
int main()
{
	Vyraz a{ 2,3,4 };
	stringstream is;
	is << "a 51 36 98 15 78 b 15";
	while (1) {
		try
		{
			is >> a;
			break;
		}
		catch (const Vyraz::ErrorSymbol& e)
		{
			cout << e.what();
			is.clear(ios::goodbit);
			is.str("1 2 3 4 5 6 7 8 9");
		}
	}

	double val{10.0};
	while (1) {
		try
		{
			std::cout << a.res(val) << "\n";
			break;
		}
		catch (const Vyraz::ZeroDevisionError& z)
		{
			cout << z.what();
			val = 101;
		}
		catch (const Vyraz::LogarithmError& l)
		{
			cout << l.what();
			val = -5;
		}
		catch (const Vyraz::SQRTError& s)
		{
			cout << s.what();
			val = 40;
		}
		catch (...) {
			break;
		}
	}

	try {
		std::cout << a[5].at(7);
	}
	catch(const Vyraz::OverFlow & o){
		cout << o.what();
	}
	catch (const std::overflow_error& o)
	{
		cout << o.what();
	}

	return 0;
}