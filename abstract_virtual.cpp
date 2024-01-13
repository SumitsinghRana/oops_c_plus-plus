#include <iostream>
using namespace std;
class fine
{
public:
   virtual void temp(int a,int b)=0;
};
class vine :public fine
{
public:
    void temp(int a, int b)
    {
      cout << a + b<<endl; 
    }
};
int main()
{
    vine a;
    vine b;
    a.temp(5,6);
    b.temp(8,8);
}