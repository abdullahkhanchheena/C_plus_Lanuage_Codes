#include <iostream>
using namespace std;
// ===============GLOBAL SCOPE STRUCTURE==============
struct showroom
{
    string carname;
    int year;
    float price;
};
// ================MAIN FUNCTION===============
int main()
{
    showroom cars[3]; // creating array for cars

    // TAKING INPUT FROM USER
    for (int i = 0; i < 3; i++)
    {
        // cin.ignore(); // Clearing Buffer
        cout << "\nPlease Enter Details of Car:" << i + 1 << endl;

        cout << "Car Name: ";
        cin >> cars[i].carname; // TAKING CAR NAME

        cout << "Model Year: ";
        cin >> cars[i].year; // TAKING CAR MODEL

        cout << "Price: ";
        cin >> cars[i].price; // TAKING CAR PRICE
    }

    // OUTPUT OF HIGHEST PRICE CAR
    cout << "\nCars with price above 500000 is:\n";

    for (int i = 0; i < 3; i++)
    {
        if (cars[i].price > 500000)
        {
            cout << "Car Name: " << cars[i].carname << endl;
            cout << "Model Year: " << cars[i].year << endl;
            cout << "Price: " << cars[i].price << endl;
        }
    }
    return 0;
}