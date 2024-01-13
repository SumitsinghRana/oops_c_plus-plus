#include <bits/stdc++.h>
using namespace std;
string funct(string word)
{

    string final = " ";
    for (int i = 0; i < word.size(); i++)
    {
        int temp = 0;
        for (int j = 0; j < word.size(); j++)
        {
            if (word[i] == word[j] && i != j)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
        {
            final = final + word[i];
            final = final + " ";
        }
    }
    return final;
}
int main()
{
    string word;

    cout << "Enter your keyword->";
    getline(cin, word);
    sort(word.begin(), word.end());
    string result = funct(word);

    cout <<"potpuy->"<<result;
}
