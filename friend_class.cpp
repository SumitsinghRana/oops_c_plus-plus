#include <iostream>
using namespace std;
class secound;
class first
{

    int a;

public:
    void setvalue(int val)
    {
        a = val;
    }
    friend void sum(first x, secound y);
};

class secound
{
    int b;

public:
    void setvalue(int val)
    {
        b = val;
    }
    friend void sum(first x, secound y);
};
void sum(first x, secound y)
{
    cout << "The sum numbers are->" << x.a + y.b;
}

int main()
{
    int i, j;
    first a;
    secound b;
    cout << "Enter first integer->";
    cin >> i;
    cout << "Enter secound integer->";
    cin >> j;

    a.setvalue(i);
    b.setvalue(j);
    sum(a, b);
}
