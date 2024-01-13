#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    int i, j;
    void input(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sum(complex x1, complex x2);
    void display()
    {
        cout << "complex number is-> " << a << " + " << b << "i" << endl;
    }
};
complex sum(complex x1, complex x2)
{
    complex A;
    A.input((x1.a + x2.a), (x1.b + x2.b));
    return A;
}

int main()
{
    complex x1, x2, x3;
    cout << "Enter first number:" << endl;
    cin >> x1.i;
    cout << "Enter secound number:" << endl;
    cin >> x1.j;
    x1.input(x1.i, x1.j);
    x1.display();
    cout << "Enter first number:" << endl;
    cin >> x2.i;
    cout << "Enter secound number:" << endl;
    cin >> x2.j;
    x2.input(x2.i, x2.j);
    x2.display();

    x3 = sum(x1, x2);
    cout << "sum of ";
    x3.display();
}