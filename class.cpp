#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name[5];
    int roll_num[5];
    int marks[5];
    void input();
    void display();
};
void student::input()
{
    cout << "Enter detail of student->" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name->";
        cin >> name[i];
        cout << "Enter roll_number->";
        cin >> roll_num[i];
        cout << "Enter marks->";
        cin >> marks[i];
    }
}
void student::display()
{
    cout << "Student details are->" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Name->" << name[i] << " roll number->" << roll_num[i] << " merks->" << marks[i] << endl;
    }
}
int main()
{
    student a;
    cout << "main";
    a.input();
    a.display();
    cout << "out";
    return 0;
}