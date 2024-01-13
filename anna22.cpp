#include<bits/stdc++.h>
using namespace std;
class Student{
int score[100][5];
int count=0;
int sum[100];
int tempsum;
public:


void input(int n){
    for(int i=0;i<n;i++){
    cout<<"Enter student "<<i+1<<" marks"<<endl;
    for(int j=0;j<5;j++){
        cin>>score[i][j];
    }
    cout<<endl;
    }
}
  int *calculateTotalScore(int n){
        for(int i=0;i<n;i++){
            tempsum=0;
            for(int j=0;j<5;j++){
                tempsum=tempsum+score[i][j];
            }
            sum[i]=tempsum;

          
        }
        return sum;


    }
    };
int main(){
    Student obj1;
    int n;
    int count=0;
    int anna=170;
    cout<<"How many students marks are you entering?";
    cin>>n;
    obj1.input(n);
    int *total=obj1.calculateTotalScore(n);
    for(int i=0;i<n;i++){
        if(total[i]>anna){ 
            count++;
        }
    }
        if(count==0){
            cout<<"There are no student having marks greater tha Anna"<<endl;
        }
        else{
            cout<<count<<" students have got higher marks than Anna"<<endl;          

        }
        return 0;
        
    }

