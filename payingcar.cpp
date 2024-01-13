#include <bits/stdc++.h>
using namespace std;
class toolbooth
{
    double total;
    int count;

public:
    toolbooth()
    {
        total = 0.0;
        count = 0;
    }
    void paying_cars()
    {
        cout << "passed paying\n";
        total += 0.5;
        count++;
    }
    void non_paying_cars()
    {
        cout << "passed non paying\n";
        count++;
    }
    void display()
    {
        cout << "total count ->" << count << endl;
        cout << "total earning->" << total << endl;
    }
};

int main()
{
    toolbooth obj;
    int casee;
    while (1)
    {

        cout << "Enter your choce-> 1.paying_car 2.non_paying_cars 3.display 4.exit" << endl;
        cin >> casee;
        switch (casee)
        {
        case 1:
            obj.paying_cars();
            break;

        case 2:
            obj.non_paying_cars();
            break;

        case 3:

            obj.display();
            break;
        case 4:
            return 0;
            break;

        default:
            cout << "invalid input";
            break;
        }
    }
    return 0;
}