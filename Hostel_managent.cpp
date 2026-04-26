#include <iostream>
using namespace std;
struct Student
{
    string name;
    int roll_no;
};
struct Room
{
    int room_no;
    int capacity;
    int current_std;
    Student *student;
};
int main()
{
    int r;
    cout << "Enter Numbers of Rooms: ";
    cin >> r;

    Room *rooms = new Room[r];
    for (int i = 0; i < r; i++)
    {
        cout << "---------------Room " << i + 1 << "-----------------" << endl;
        cout << "Enter Room Number: ";
        cin >> rooms[i].room_no;
        cout << "Enter Room Capacity: ";
        cin >> rooms[i].capacity;

        rooms[i].current_std = 0;
        rooms[i].student = new Student[rooms[i].capacity];
    }

    int choice;
    do
    {
        cout << "1. Add a new Room" << endl;
        cout << "2.Add Student to Room" << endl;
        cout << "3.Remove Student from a Room" << endl;
        cout << "4.Display All Rooms" << endl;
        cout << "5.Find Most Crowded Room" << endl;
        cout << "6.Exit the program" << endl;



        
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout << "";
            break;
        }
        default:
        {
            cout << "Invalid Choice Entered!" << endl;
            break;
        }
        }
    } while (choice != 6);
    return 0;
}