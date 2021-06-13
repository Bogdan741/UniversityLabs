#include "Header.h"
#include <cmath>
//--------------------------------------------------------------------------------
//bool NullDeposit::write_to_file(const std::string& str, const std::string& file) const
//{
//	std::ofstream os(file, std::ios_base::out | std::ios_base::app);
//	if (os.is_open())
//	{
//		os << str << "\n";
//		return true;
//	}
//	return false;
//}

int NullDeposit::TimeLeft() const
{
	return end_month - cur_month;
}

//--------------------------------------------------------------------------------
double TermDeposit::GetIncome() const
{
	return income;
}
//--------------------------------------------------------------------------------
int TermDeposit::AddDate(int m)
{
	cur_month += m;
	if(cur_month == end_month)
		income = value * percent;
	return cur_month;
}
//--------------------------------------------------------------------------------
std::string TermDeposit::print() const
{
	return "TermDeposit";
}
//--------------------------------------------------------------------------------
double CumulitiveDeposit1::GetIncome(int tmonth) const
{
	if (tmonth > end_month)
		return value * pow(1 + percent / 12, end_month) - value;
	else
		return value * pow(1 + percent / 12, tmonth) - value;
}
//--------------------------------------------------------------------------------
double CumulitiveDeposit1::GetIncome() const
{
	return income;
}
//--------------------------------------------------------------------------------
int CumulitiveDeposit1::AddDate(int m)
{
	cur_month += m;
	if(cur_month < end_month)
		income = value * pow(1 + percent / 12, cur_month) - value;
	else
		income = value * pow(1 + percent / 12, end_month) - value;
	return cur_month;
}
//--------------------------------------------------------------------------------
std::string CumulitiveDeposit1::print() const
{
	return "CumulitiveDeposit1";
}
//--------------------------------------------------------------------------------
int VIPDeposit::AddDate(std::size_t m)
{
	cur_month += m;
	if (cur_month < end_month)
		income += (value + additional_input + income) * pow(1 + percent / 12, m) - value + additional_input + income;
	else
		income += (value + additional_input + income) * pow(1 + percent / 12, end_month - cur_month) - value + additional_input + income;
	return cur_month;
}
//--------------------------------------------------------------------------------
std::string VIPDeposit::print() const
{
	return "VIPdeposit";
}
//--------------------------------------------------------------------------------
double VIPDeposit::GetIncome() const
{
	return income;
}
//--------------------------------------------------------------------------------
double VIPDeposit::GetIncome(std::size_t tmounth)const
{
	return (value + additional_input + income) * pow(1 + percent / 12, tmounth) - value + additional_input + income;
}
//--------------------------------------------------------------------------------
double VIPDeposit::DoInput(double input)
{
	additional_input += input;
	return additional_input;
}
//--------------------------------------------------------------------------------
