#include <iostream>
#include <cstring>
using namespace std;

class student
{

private:
	int rollnumber;
	char *name;

public:
	student(int roll, const char *n)
	{
		rollnumber = roll;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	student(const student &n2)
	{
		rollnumber = n2.rollnumber;
		name = new char[strlen(n2.name) + 1];
		strcpy(name, n2.name);
	}
	~student()
	{
		delete[] name;
	}
	void showdata()
	{
		cout << "Name: " << name << endl;
		cout << "Roll Number: " << rollnumber << endl;
	}
	void setname(const char *n3)
	{
		delete[] name;
		name = new char[strlen(n3) + 1];
		strcpy(name, n3);
	}
	void setroll(int r)
	{
		rollnumber = r;
	}
};

int main()
{
	student s1(101, "Abdullah Husain");

	student s2 = s1;
	cout << "Before modif...." << endl;
	cout << "object 1" << endl;
	s1.showdata();
	cout << "object 2" << endl;
	s2.showdata();

	cout << "After modif...." << endl;
	s2.setname("Habibullah Hussain");
	s2.setroll(102);
	cout << "object 1" << endl;
	s1.showdata();
	cout << "object 2" << endl;
	s2.showdata();
	return 0;
}