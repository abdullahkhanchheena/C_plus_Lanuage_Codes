#include <iostream>
using namespace std;
//--------------MONEY CLASS------------
class Money
{
private:
	int dollars;
	int cents;

public:
	// Default Constructor
	Money()
	{
		dollars = 0;
		cents = 0;
	}
	// Parametarized Constructor
	Money(int dollar, int cent)
	{
		dollars = dollar;
		cents = cent;
	}
	// Money operator+
	Money operator+(const Money &obj)
	{
		Money temp;
		temp.dollars = dollars + obj.dollars;
		temp.cents = cents + obj.cents;
		return temp;
	}
	// Money operator-
	Money operator-(const Money &obj)
	{
		Money temp;
		temp.dollars = dollars - obj.dollars;
		temp.cents = cents - obj.cents;
		return temp;
	}
	// Money operator=
	Money operator=(const Money &obj)
	{
		if (this != &obj)
		{
			dollars = obj.dollars;
			cents = obj.cents;
		}
		return *this;
	}
	// Money pre-increment++
	Money &operator++()
	{
		cents++;
		return *this;
	}
	// Money pre-decrement--
	Money &operator--()
	{
		cents--;
		return *this;
	}
	// Money operator !=
	bool operator!=(const Money &obj)
	{
		return (dollars != obj.dollars || cents != obj.cents);
	}
	// Void operator ~
	void operator~()
	{
		cout << "Dollars: " << dollars << endl;
		cout << "Cents: " << cents << endl;
	}
};
//-------------Main Function------------
int main()
{
	Money M1(12, 95);
	Money M2(3, 98);
	cout << "----------------------------------------------------" << endl;
	cout << "     Dollar and Cents Before Operator Operations" << endl;
	cout << "----------------------------------------------------" << endl;

	cout << "----------------------------------------------------" << endl;
	cout << "      ---------------    M1    ----------------     " << endl;
	cout << "----------------------------------------------------" << endl;
	~M1;

	cout << "----------------------------------------------------" << endl;
	cout << "      ---------------    M2    ----------------     " << endl;
	cout << "----------------------------------------------------" << endl;
	~M2;

	cout << "----------------------------------------------------" << endl;
	cout << "     Dollar and Cents After Operator Operations" << endl;
	cout << "----------------------------------------------------" << endl;
	//+ operator
	Money M3 = M1 + M2;
	cout << "----------------------------------------------------" << endl;
	cout << "      ---------------    M3    ----------------     " << endl;
	cout << "----------------------------------------------------" << endl;
	~M3;

	//- operator
	Money M4 = M1 - M2;
	cout << "----------------------------------------------------" << endl;
	cout << "      ---------------    M4    ----------------     " << endl;
	cout << "----------------------------------------------------" << endl;
	~M4;

	//= operator
	Money M5 = M1;
	cout << "----------------------------------------------------" << endl;
	cout << "      ---------------    M5    ----------------     " << endl;
	cout << "----------------------------------------------------" << endl;
	~M5;

	//++ operator
	++M1;
	cout << "----------------------------------------------------" << endl;
	cout << "      --------    M1 After Increment   --------     " << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "After ++M1: " << endl;
	~M1;

	//+ operator
	--M2;
	cout << "----------------------------------------------------" << endl;
	cout << "     --------    M2 After Deccrement   --------     " << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "After --M2: " << endl;
	~M2;

	// Not Equal Operator
	if (M1 != M2)
	{
		cout << "----------------------------------------------------" << endl;
		cout << "              M1 and M2 are NOT equal               " << endl;
		cout << "----------------------------------------------------" << endl;
	}
	else
	{
		cout << "----------------------------------------------------" << endl;
		cout << "               M1 and M2 are equal                  " << endl;
		cout << "----------------------------------------------------" << endl;
	}
	return 0;
}