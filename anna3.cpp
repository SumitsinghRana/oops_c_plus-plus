#include<bits/stdc++.h>
using namespace std;

class student
{
    private:
        string name;
        int marks[5];
    public:
        void input();
     //   void display();
        int total();
};
void student::input()
{
    cout<<"Enter name and marks of 5 subjects\n";
    cin>>name;
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }
}
//void student::display()
//{
//    cout<<"Displaying name and marks in 5 subjects\n";
//    cout<<name<<endl;
//    for(int i=0;i<5;i++)
//    {
//        cout<<marks[i] << " ";
//    }
//}
int student::total()
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=marks[i];
    }
    return sum;
}

int main()
{
    int n, ana;
    cout<<"Enter the marks of Anna\n";
    cin>>ana;
    cout<<"Enter total number of students\n";
    cin>>n;

    student ar[n];

    for(int i=0;i<n;i++)
    {
        ar[i].input();
    }

    int count=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i].total() > ana)
        {
            count++;
        }
    }
    cout<<"The number of students having more marks is : "<<count<<endl;
  //  for(int i=0;i,n;i++){
  //      ar[i].display();
  //  }
} 
