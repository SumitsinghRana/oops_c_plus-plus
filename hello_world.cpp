#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Enter your string->";
    getline(cin,s);
    cout<<s;
    for(int i=0;s[i]!='\0';i++){
        for(char ch=30;ch<133;ch++){
            cout<<s.substr(0,i);
            cout<<ch;
            if(s[i]==ch){
                cout<<endl;
                break;
            }
            cout<<endl;
        }
    }
    return 0;
}