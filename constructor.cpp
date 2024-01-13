#include <iostream>
using namespace std;
class data
{
    int a, b, c, d;

public:
    data(int x, int y, int z, int z1 = 69)
    {
        a = x;
        b = y;
        c = z;
        d = z1;
    }
    void display();
    
};
void data::display()
{
    cout << "The values are->" << a <<" "<< b <<" "<< c <<" " <<d;
}
int main()
{
    data o(39, 49, 59);
    o.display();
}