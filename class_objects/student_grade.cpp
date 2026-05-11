#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int rollno;
    double marks[5];

public:
    Student(string nam, int roll, double m[5])
    {
        name = nam;
        rollno = roll;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
    }
    double getaverage() const
    {
        double sum;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        return sum / 5;
    }
    char getgrade() const
    {
        double avg = getaverage();
        if (avg >= 90)
            return 'A';
        if (avg >= 80)
            return 'B';
        if (avg >= 70)
            return 'C';
        if (avg >= 60)
            return 'D';
        if (avg >= 50)
            return 'F';
    }
};
int main()
{
    double m1[] = {85, 90, 78, 92, 88};
    double m2[] = {70, 65, 80, 75, 72};

    Student s1("Abdullah Hussain", 101, m1);
    Student s2("Habibullah Hussain", 101, m2);
}