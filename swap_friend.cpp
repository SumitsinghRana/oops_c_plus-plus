#include<iostream>
using namespace std;
class secound;
class first{
    int A;
    public:
void setvalue(int val){
    A=val;
}
void display(void){
cout<<" A->"<<A;
}
friend void swap(first & x,secound & y);

};
class secound{
int B;
public:
void setvalue(int val){
    B=val;
}
void display(void){
    cout<<" B->"<<B;

}
friend void swap(first &  x,secound & y);
};
void swap(first & x,secound & y){
    int temp;
    temp=x.A;
    x.A=y.B;
    y.B=temp;
    //cout<<"After seapping A->"<<x.A<<" and B->"<<y.B;
}

int main(){
    int a,b;
    first o1;
    secound o2;
    cout<<"Enter value of A->";
    cin>>a;
    cout<<"Enter value of B->";
    cin>>b;
    o1.setvalue(a);
    o2.setvalue(b);
    swap(o1,o2);
    o1.display();
    o2.display();
    
    return 0;

}