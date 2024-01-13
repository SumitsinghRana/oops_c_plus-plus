#include <iostream>
#include <cmath>
using namespace std;

class Distance
{

    float A1, A2;

public:
    void setdata(int x1, int x2)
    {
        A1 = pow(x2 - x1, 2);
    }
    void setdata2(int y1, int y2)
    {
        A2 = pow(y2 - y1, 2);
    }
    friend float calculate(Distance o1, Distance o2);
};
float calculate(Distance o1, Distance o2)
{
    float temp = sqrt(o1.A1 + o2.A2);
    return temp;
}
int main()
{
    Distance a, b;
    int x1, x2, y1, y2;
    cout << "Enter first points value:" << endl;
    cout << "Value of X1?" << endl;
    cin >> x1;
    cout << "Value of X2?" << endl;
    cin >> x2;
    cout << "Enter secound points value:" << endl;
    cout << "Value of Y1?" << endl;
    cin >> y1;
    cout << "Value of Y2?" << endl;
    cin >> y2;
    a.setdata(x1, x2);
    b.setdata2(y1, y2);
    float final = calculate(a, b);
    cout << "distance is" << final;
}
