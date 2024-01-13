#include <bits/stdc++.h>
using namespace std;

string funct(string name, char letter)
{
    string final = " ";
    for (int i = 0; i < name.size(); i++)
    {
        if (name[i] != letter)
        {
            final = final + name[i];
        }
    }
    return final;
}

int main()
{
    string name;
    char letter;
    cout << "Enter your keyword or sentence->";
    getline(cin, name);
    cout << "Which letter you want to delete?" << endl;
    cin >> letter;
    string ans = funct(name, letter);
    cout << "Updated string is->" << ans;
    return 0;
}