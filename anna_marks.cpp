#include <iostream>
using namespace std;
class student
{
public:
    int marks[100][5];
    int n, sum[100], Anna = 180;
    void input()
    {
        cout << "Total Students?" << endl;
        cin >> n;
        for (int i = 0; i < n; i++)
        {

            cout << "Enter the marks of " << (i + 1) << " student:" << endl;
            for (int j = 0; j < 5; j++)
            {
                cin >> marks[i][j];
            }
        }
    }
    int *calculate_total_score()
    {
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = 0; j < 5; j++)
            {
                temp = temp + marks[i][j];
            }
            sum[i] = temp;
        }
        return sum;
    }
};
int main()
{
    int count = 0;
    student a;
    a.input();
    int *sum = a.calculate_total_score();
    for (int i = 0; i < a.n; i++)
    {
        if (sum[i] > a.Anna)
        {
            count++;
        }
    }
    if (count > 0)
    {
        cout << count << " students have more marks than Anna" << endl;
    }
    else
    {
        cout << "No one hase more marks than Anna" << endl;
    }
    return 0;
}
