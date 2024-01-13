#include <bits/stdc++.h>
using namespace std;

class sign
{
    int a;

public:
    sign() {}
    sign(int x)
    {
        a = x;
    }
    sign operator-()
    {
        sign temp;
        temp.a = -a;
        return temp;
    }
    void display()
    {
        cout << "value of a-> " << a << endl;
    }
};
int main()
{
    sign s1(5), s2;
    s2 = -s1;
    s1.display();
    s2.display();
    return 0;
}