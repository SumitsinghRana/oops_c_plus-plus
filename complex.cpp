#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void input(int c1, int c2)
    {
        a = c1;
        b = c2;
    }
    void display()
    {

        cout << "complex number is " << a << " + " << b << "i" << endl;
    }
    void function(complex x1,complex x2){
       cout<<"sum of two compex number is "<<x1.a+x2.a<<" + "<<x1.b+x2.b<<"i"<<endl;
    }

};

int main()
{
    complex x1, x2,x3;
    x1.input(3, 5);
    x1.display();
    x2.input(4, 4);
    x2.display();
    x3.function(x1,x2);
}