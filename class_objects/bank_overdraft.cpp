#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
protected:
    string holdername;
    int acc_number;
    double balance;

public:
    BankAccount(string nam, int acc, double bal)
    {
        holdername = nam;
        acc_number = acc;
        balance = bal;
    }
    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (amount < balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient Funds!" << endl;
        }
    }
    double getbalace() const
    {
        return balance;
    }
    void display() const
    {
        cout << "Account Number: " << acc_number << endl;
        cout << "Account Holder Name: " << holdername << endl;
        cout << "Balnace :" << balance << endl;
    }
    ~BankAccount()
    {
    }
};
class savingaccount : public BankAccount
{
private:
    double interest;

public:
    savingaccount(string nam, int acc, double bal, double rate) : BankAccount(nam, acc, bal)
    {
        interest = rate;
    }
    void apply()
    {
        balance += balance * interest / 100.0;
    }
};
int main()
{
    savingaccount sa("Ali Khan", 12342, 5000.0, 5.0);
    sa.display();
    sa.apply();
    sa.display();
    return 0;
}