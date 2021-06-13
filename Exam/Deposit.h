#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::ostream;
//Розробити такі типи депозитів :
//-Строковий(виплата відсотків відбувається після закінчення терміну депозиту);
//-Накопичувальний(капіталізація відсотків, виплата відбувається кожного місяця);
//-VIP(капіталізація відсотків, виплата кожного місяця, можливість поповнення рахунку в будь - який день, збільшення відсоткової ставки із заданим коефіцієнтом при збільшенні суми вкладу(обмежене зверху)).
//Всі класи повинні вміти обчислювати прибуток за вказаний та за весь період вкладу.
//Набір полів і методів, необхідних для забезпечення функціональної зручності класів, визначити самостійно.

class Deposit
{
private:
	int start;
	int end;
	double value;
	int persent;
private:
	enum {PERSENT = 10};
public:
	Deposit(double value0, int persent0, int start0 = 0, int end0 = 0) : value(value0), persent(persent0), \
		start(start0), end(end0){}
	virtual ~Deposit() = 0;
	virtual double revenue() = 0;
	virtual void procced(int months) { end += months; }
	friend ostream& operator<<(ostream& os, const Deposit& s);
};