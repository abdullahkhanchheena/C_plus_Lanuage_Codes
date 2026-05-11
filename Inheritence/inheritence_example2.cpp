#include <iostream>
using namespace std;
class person
{
protected:
	string name;
	int age;

public:
	void displaypersondetail()
	{
		cout << "\nStudent Name: " << name << endl;
		cout << "Enter Age: " << age << endl;
	}
	~person()
	{
	}
};
class academicrecord : public person
{
protected:
	double gpa;
	string major;

public:
	void displayacademicdetsils()
	{
		cout << "Student GPA: " << gpa << endl;
		cout << "Student Major: " << major << endl;
	}
	~academicrecord()
	{
	}
};
class scholarship : public academicrecord
{
private:
	double scholarshipamount;

public:
	scholarship()
	{
		cout << "\nEnter Student Name: ";
		getline(cin, name);
		cout << "Enter Student Age: ";
		cin >> age;

		cout << "Enter Student GPA: ";
		cin >> gpa;
		cin.ignore();
		cout << "Enter Student Major: ";
		getline(cin, major);
	}
	void evaluatescholarship()
	{
		if (gpa > 3.0 && age > 18)
		{
			cout << "Scholarship Rs.50000 Allocated!" << endl;
		}
		else
		{
			cout << "No Scholarship Allocated!" << endl;
		}
	}
	~scholarship()
	{
	}
};
int main()
{
	scholarship s1;

	s1.displaypersondetail();
	s1.displayacademicdetsils();
	s1.evaluatescholarship();
	return 0;
}