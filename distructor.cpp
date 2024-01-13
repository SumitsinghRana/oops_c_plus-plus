#include<bits/stdc++.h>
using namespace std;

class one{
    int a,b;
    public:
    one(){}
    one(int x,int y){
        a=x;
        b=y;
    }
     void Display(){
        cout<<"Value of a is "<<a<<" and value of b is "<<b<<endl;
     }
     ~one(){
        cout<<"distractor called\n";
     } 

};
int main(){
 one a(5,6),b(1,2),c;
 a.Display();
 b.Display();
 
 return 0;
}