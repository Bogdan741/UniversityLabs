#pragma once
#ifndef _DEPOSIT_
#define _DEPOSIT_
#include <iostream>
#include <string>
#include <fstream>
//--------------------------------------------------------------------------------
class Deposit{
protected:
	int end_month;
	int cur_month;
	double value;
	double percent;
	double income;
public:

	Deposit(double value0, int month0, double percent0)
		: value(value0), end_month(month0), cur_month(0), percent(percent0), income(0){}
	virtual ~Deposit(){}
	bool write_to_file(const std::string & str, const std::string& file) const;
};
//--------------------------------------------------------------------------------
class TermDeposit: public Deposit
{
public:
	TermDeposit(double value0, int month0, double percent0): Deposit(value0, month0, percent0){}
	double GetIncome() const;
	int AddDate(int m);
	std::string print() const;

};
//--------------------------------------------------------------------------------
class CumulitiveDeposit1 : public Deposit
{
public:
	CumulitiveDeposit1(double value0, int month0, double percent0) : Deposit(value0, month0, percent0) {}
	double GetIncome(int tmonth) const;
	double GetIncome() const;
	int AddDate(int m);
	std::string print() const;
};
//--------------------------------------------------------------------------------
class VIPDeposit: public CumulitiveDeposit1
{
protected:
	double value_to_increase_percent;
	double additional_input;
	double better_percent;

public:
	VIPDeposit(double value0, int month0, double percent0, double better_percent, double value_to_increase_percent)
	: CumulitiveDeposit1(value0, month0, percent0)
	{
		this->better_percent = better_percent;
		this->value_to_increase_percent = value_to_increase_percent;
		this->additional_input = 0;

		if (value > value_to_increase_percent)
			percent += better_percent;
	}
	int AddDate(std::size_t m);
	std::string print() const;
	double GetIncome() const;
	double GetIncome(std::size_t tmounth) const;
	double DoInput(double input);

};
//--------------------------------------------------------------------------------
#endif