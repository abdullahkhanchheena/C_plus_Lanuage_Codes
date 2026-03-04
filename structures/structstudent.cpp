#include<iostream>
using namespace std;
struct student
{
    string name;
    int marks;
};

int main()
{
    student s1 = {"Ali", 85};
    cout << s1.name << " " << s1.marks << endl;
    return 0;
}