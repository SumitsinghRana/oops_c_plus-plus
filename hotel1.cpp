#include <bits/stdc++.h>
using namespace std;
class Hotel
{
private:
    int rno;
    int tarrif;
    int nod;
    string name;
    friend int main();
    int CALC()
    {
        float amount = nod * tarrif;
        if (amount > 10000)
        {
            amount *= 1.05;
        }
        return amount;
    }

public:
    void Checkin()
    {
        cout << "Enter your Room number->";
        cin >> rno;
        cout << "Enter your Name->";
        cin >> name;
        cout << "Enter per day charge->";
        cin >> tarrif;
        cout << "Enter days of stay->";
        cin >> nod;
    }
    void checkout(float vamp)
    {
        cout << "Your Room number->" << rno<<endl;;
        cout << "Your Name->" << name<<endl;
        cout << "Your per day charge->" << tarrif<<endl;
        cout << "Your days of stay->" << nod<<endl;
        cout << "your total amount is->Rupess " << vamp;
    }
};
int main()
{
    Hotel obj1;
    obj1.Checkin();
    float vamp = obj1.CALC();
    obj1.checkout(vamp);
    return 0;
}
