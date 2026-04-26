#include <iostream>
using namespace std;
class BankAccount
{
private:
    string accountholder;
    int accountnumber;
    double balance;

public:
    BankAccount(string name, int number, double balance = 0.0)
    {
        accountholder = name;
        accountnumber = number;
    }

    void deposit(double amount)
    {
        if (amount == -(amount))
        {
            cout << "Negative Balance! Try again." << endl;
        }
        else
        {
            balance += amount;
        }
    }
    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient Fund." << endl;
        }
        else
        {
            balance -= amount;
        }
    }

    
    double get_balance()
    {
        return balance;
    }
    void printstatement()
    {
        cout << "Account Holder Name: " << accountholder << endl;
        cout << "Account Number: " << accountnumber << endl;
        cout << "Balance: " << get_balance() << endl;
    }
};
int main()
{

    string name;
    int number;
    cout << "Enter Account Holder Name: ";
    cin >> name;
    cout << "Enter Account Number: ";
    cin >> number;

    BankAccount ac1(name, number);

    double dep, withd;
    cout << "Enter Deposit Amount: ";
    cin >> dep;
    cout << "Enter Withdraw Amount: ";
    cin >> withd;
    ac1.deposit(dep);
    ac1.withdraw(withd);

    cout << "Current Balance: " << ac1.get_balance() << endl;

    cout << "-------Account Details-------" << endl;

    ac1.printstatement();

    return 0;
}