#include <bits/stdc++.h>
using namespace std;
class bank_account
{
    string name, type;
    int acc_num, balance;
    int add, remove;

public:
    void initialize()
    {
        cout << "Enter name->";
        cin >> name;
        cout << "Your account number?";
        cin >> acc_num;
        cout << "Account type->Saving or Current?";
        cin >> type;
        cout << "Balance->";
        cin >> balance;
    }
    void deposit()
    {
        cout << "Money you want to deposit->";
        cin >> add;
        balance += add;
    }
    void withdraw()
    {
        cout << "Your current balance is->" << balance << endl;
        ;
        cout << "How much money you want to withdraw?" << endl;
        cin >> remove;
        if (remove > balance)
        {
            cout << "Sorry! Not enough balance!"<<endl;
        }
        else{
        balance -= remove;
        cout << "Withdrawal succesfull" << endl;
        }
    }
    void display()
    {
        cout << "Name->" << name << endl;
        cout << "Balance->" << balance << endl;
    }
};
int main()
{
    bank_account obj1;
    obj1.initialize();
    obj1.deposit();
    obj1.withdraw();
    obj1.display();
    return 0;
}