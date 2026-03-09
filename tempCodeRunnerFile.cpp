#include <iostream>
#include <limits>
using namespace std;

// ============ENUM FOR TRANSACTION TYPE==========
enum transactiontype
{
    Deposit,
    Withdraw
};

// ==========TRANSACTION STRUCTURE=========
struct transaction
{
    int tra
    nsaction_ID;
    float amount;
    transactiontype type; // Deposit or withdraw
};

// =========BANK ACCOUNT STRUCTURE========
struct bankaccount
{
    string accout_name;
    long long accout_number;
    float current_balance;
    transaction trans[10];
    int trans_count = 0;
};

// =========DEPOSIT FUNCTION=========
void deposit(bankaccount *acc)
{
    if (acc->trans_count >= 10)
    {
        cout << "Transaction limit Reached!" << endl;
        return;
    }

    float amount;
    cout << "Enter Amount to Deposit: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid Amount! Must be greater than 0!" << endl;
        return;
    }

    acc->current_balance += amount;

    // RECORD TRANSACTION
    acc->trans[acc->trans_count].transaction_ID = acc->trans_count + 1;
    acc->trans[acc->trans_count].amount = amount;
    acc->trans[acc->trans_count].type = Deposit;
    acc->trans_count++;

    cout << "Amount Deposited Successfully! Current Balance: " << acc->current_balance << endl;
}

// ========WITHDRAW FUNCTION========
void withdraw(bankaccount *acc)
{
    if (acc->trans_count >= 10)
    {
        cout << "Transaction limit Reached!" << endl;
        return;
    }

    float amount;
    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    if (amount <= 0)
    {
        cout << "Invalid Amount! Must be greater than 0." << endl;
        return;
    }

    if (amount > acc->current_balance)
    {
        cout << "Insufficient Balance!" << endl;
        return;
    }

    acc->current_balance -= amount;

    // RECORD TRANSACTION
    acc->trans[acc->trans_count].transaction_ID = acc->trans_count + 1;
    acc->trans[acc->trans_count].amount = amount;
    acc->trans[acc->trans_count].type = Withdraw;
    acc->trans_count++;

    cout << "Amount Withdrawn Successfully! Current Balance: " << acc->current_balance << endl;
}

// ========DISPLAY TRANSACTION HISTORY========
void display_trans_history(bankaccount *acc)
{
    if(acc->trans_count == 0)
    {
        cout << "No Transactions to show!" << endl;
        return;
    }

    cout << "\nTransaction History" << endl;
    cout << "ID\tType\t\tAmount" << endl;
    for (int i = 0; i < acc->trans_count; i++)
    {
        cout << acc->trans[i].transaction_ID << "\t";
        if (acc->trans[i].type == Deposit)
            cout << "Deposit\t\t";
        else
            cout << "Withdraw\t";
        cout << acc->trans[i].amount << endl;
    }
}

// ========DISPLAY HIGHEST TRANSACTION========
void display_highest_trans(bankaccount *acc)
{
    if (acc->trans_count == 0)
    {
        cout << "No Transaction History!" << endl;
        return;
    }

    float maximum_amount = acc->trans[0].amount;
    int max_index = 0;

    for (int i = 1; i < acc->trans_count; i++)
    {
        if (acc->trans[i].amount > maximum_amount)
        {
            maximum_amount = acc->trans[i].amount;
            max_index = i;
        }
    }

    cout << "\nHighest Transaction:" << endl;
    cout << "ID: " << acc->trans[max_index].transaction_ID << "\t";
    if (acc->trans[max_index].type == Deposit)
        cout << "Deposit\t\t";
    else
        cout << "Withdraw\t";
    cout << "Amount: " << acc->trans[max_index].amount << endl;
}

// ==========MAIN FUNCTION==========
int main()
{
    bankaccount acc;
    cout << "Enter Account Holder Name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, acc.accout_name);
    cout << "Enter Bank Account Number: ";
    cin >> acc.accout_number;
    cout << "Enter Initial Balance: ";
    cin >> acc.current_balance;

    int choice;
    do
    {
        cout << "\n======= Banking Menu =======" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Transaction History" << endl;
        cout << "4. Display Highest Transaction" << endl;
        cout << "5. Display Current Balance" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            deposit(&acc);
            break;
        case 2:
            withdraw(&acc);
            break;
        case 3:
            display_trans_history(&acc);
            break;
        case 4:
            display_highest_trans(&acc);
            break;
        case 5:
            cout << "Current Balance: " << acc.current_balance << endl;
            break;
        case 6:
            cout << "Exiting the Program!" << endl;
            break;
        default:
            cout << "Invalid Choice! Try Again." << endl;
        }

    } while (choice != 6);

    return 0;
}