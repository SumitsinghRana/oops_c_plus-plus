#include<bits/stdc++.h>
using namespace std;
class complexx{
    int a,b;
    public:
    complexx(){}
    complexx(int x,int y){
        a=x;
        b=y;
    }
     complexx operator+(complexx c){
       complexx temp;
       temp.a=a+c.a;
       temp.b=b+c.b;
       return temp;
     }

void display(){
    cout<<"complex number is-> "<<a<<" + "<<b<<"i"<<endl;

}
     
};
int main(){
    complexx c1(4,5),c2(6,7),c3;
    c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}