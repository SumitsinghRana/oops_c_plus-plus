#include <iostream>
using namespace std;
void secound(int *a, int n)
{
    int largest, sec;
    sec = -1;
    largest = a[0];
    for (int i = 1; i < n; i++)
    {

        if (a[i] == largest || sec == largest)
        {
            continue;
        }
        else if (a[i] > largest)
        {
            sec = largest;
            largest = a[i];
        }
        else if (a[i] > sec && a[i] < largest)
        {
            sec = a[i];
        }
    }
    cout << "largest is:" << largest << endl;
    cout << "secound largest is:" << sec << endl;
}
int main()
{

    int n, arr[50];
    cout << "enter the lenghth of array:";
    cin >> n;
    cout << "enter the elements of arrray:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    secound(arr, n);
    return 0;
}
