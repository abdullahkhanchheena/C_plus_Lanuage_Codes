#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;

    
public:
    void get_data()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
    void show_data()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class student : public Person
{
private:
    float fee;
    int roll_number;

public:
    void set_student_data(int r)
    {
        get_data();
        roll_number = r;
    }
    void calculate_fee(float f)
    {
        fee = f;
        fee = fee + 1000;
    }
    void show_student_data()
    {
        show_data();
        cout << "Roll Number: " << roll_number << endl;
        cout << "Student Fee: " << fee << endl;
    }
};
int main()
{
    student s;
    s.set_student_data(1);
    s.calculate_fee(1200);
    s.show_student_data();
    return 0;
}