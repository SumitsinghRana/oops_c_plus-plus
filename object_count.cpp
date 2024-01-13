#include <bits/stdc++.h>
using namespace std;
class coun
{
public:
    static int count;

    coun()
    {
        count++;
    }
    void display()
    {
        cout << count;
    }
};
int coun::count = 0;

int main()
{
    coun a, b, c, d, e, f, g, h;
    a.display();
    return 0;
}