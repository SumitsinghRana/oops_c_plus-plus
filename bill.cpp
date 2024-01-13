#include <bits/stdc++.h>
using namespace std;

float cal(int bill)
{

  float ans;

  if (bill <= 100)
  {
    ans = bill * 0.6;
  }
  else if (bill <= 300 && bill > 100)
  {
    ans = bill * 0.8;
  }
  else
  {
    ans = bill * 0.9;
  }
  ans = ans + 50;
  if (ans > 300)
  {
    ans = ans + (15 / ans) * 100;
  }
return ans;
}
  

int main()
{

  int unit[100], n;
  string name[100];
  float final[100];
  cout << "How many peoples bill you want to calculatre?" << endl;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cout << "Enter your name->";
    cin >> name[i];
    cout << "Enter the units of your electricity consuption:" << endl;
    cin >> unit[i];
    final[i] = cal(unit[i]);
  }

  for (int i = 0; i < n; i++)
  {

    cout << "Your bill in Rupees for " <<name[i]<< " who consumed "<< unit[i] << " unit "
         << "is " << final[i] << endl;
  }
}
