#include <iostream>
using namespace std;

class employee
{

    int id;
    static int count;

public:
    void input(int i)
    {
        cout << "Enter the id of " << i << " employee->"; 
        cin >> id;
        count++;
    }
    void display(int i) 
    { 
        cout << "The id of " << i << " employee is:" << id << endl;
        cout << "Total Employee->" << count << endl;
    }
    // static void countt()
    // {
    //     cout << "Total numbres of employee are->" << count << endl;
    // }
};
int employee::count; // value initalized with 0;Although we can initalize it with somenting but here only not in classs;

int main()
{
    employee A[4];
    for (int i = 0; i < 4; i++)
    {
        A[i].input(i+1);
        A[i].display(i+1);
    }

    // employee::countt();
}