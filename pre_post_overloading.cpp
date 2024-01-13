#include <bits/stdc++.h>
using namespace std;
class increment
{
    int a;

public:
    increment() {}
    increment(int x)
    {
        a = x;
    }
    increment operator++()
    {
        increment temp;
        temp.a = ++a;
        return temp;
    }
    increment operator++(int)
    {
        increment temp;
        temp.a = a++;
        return temp;
    }
    void display()
    {
        cout << a << endl;
    }
};

int main()
{
    increment i1(2), i2;
    i2 = i1++;
    i2.display();
    i1.display();
    i2 = ++i1;
    i2.display();
    i1.display();
    return 0;
}