#include <bits/stdc++.h>
using namespace std;

void area(int x, int y, int z)
{
    float s = (x + y + z) / 2;
    float final = sqrt(s * (s - x) * (s - y) * (s - z));
    cout << "Area of triangle->" << final << endl;
}
void area(int x)
{
    cout << "Area of square" << x * x << endl;
}
void area(int x, int y)
{
    cout << "Area of rectangle" << x * y << endl;
}

int main()
{
    int choice, x, y, z;
    while (1)
    {
        cout << "Choose 1.For triangle 2.For square 3.For rectangle" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter s1,s2,s3->" << endl;
            cin >> x >> y >> z;
            area(x, y, z);
            break;
        case 2:
            cout << "Enter one side>" << endl;
            cin >> x;
            area(x);
            break;
        case 3:
            cout << "Enter l and b->" << endl;
            cin >> x, y;
            area(x, y);
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "Invalid input";
            break;
        }
    }
}