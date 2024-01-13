#include<bits/stdc++.h>
using  namespace std;
 class node {
    public:
    int data;
    node *pre,*next;
    node*new_node,*head,*temp;

     void insert(int n){
        head=NULL;
         cout<<"Enter values in your DLL->"<<endl;
         for(int i=1;i<=n;i++){
              new_node=new node();
              cout<<i<<"->";
              cin>>new_node->data;
              if(head==NULL){
                head=new_node;
                temp=head;
                new_node->pre=NULL;
              }
              head->next=new_node;
              new_node->pre=head;
              head=head->next;

         }
         head->next==NULL;
    }

    int search(int key,int n){
        int flag=0;
        head=temp;
        for(int i=1;i<=n;i++)
        {
            if(head->data==key){
                return i;
                flag=1;
            }
            head=head->next;
        }
        if(flag==0){
            return -1;
        }
    }

 };

int main(){
    node obj;;
   int n,key;
   cout<<"How many nodes you want in your DLL?"<<endl;
   cin>>n;
   obj.insert(n);
   cout<<"Which value you want to search?";
   cin>>key;
   int ans=obj.search(key,n);
   if(ans==-1){
    cout<<key<<" was not in the DLL";
   }
  else{
    cout<<key<<" was found at node "<<ans;
  }
}