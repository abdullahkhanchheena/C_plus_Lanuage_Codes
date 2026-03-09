#include<iostream>
using namespace std;

struct mobile
{
    string name;
    float price;
    int resolution;
    int aoerture;
};

int main()
{
    int n;
    cout << "Enter Number of Mobiles: ";
    cin >> n;

    mobile *mbl = new mobile[n];
}