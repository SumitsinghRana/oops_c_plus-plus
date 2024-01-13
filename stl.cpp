#include<bits/stdC++.h>
using namespace std;
  int main(){
    vector<int>v;
    list<int>l;
    map<string,int>m;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    l.push_back(55);
    l.push_back(66);
    l.push_back(77);

    m["sum"]=23;
    m["sum2"]=24;
    m["sum3"]=25;
    for(auto i:v){
        cout<<i;
    }
    cout<<endl;
     for(auto i:l){
        cout<<i;
    }
    cout<<endl;
     for(auto i:m){
        cout<<i.first<<i.second;
    }


  }