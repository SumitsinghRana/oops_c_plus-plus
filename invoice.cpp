#include<bits/stdc++.h>
using namespace std;
class invoice{
    int part_number;
    string part_description;
    int qty;
    double price_per_item;
    public:
invoice(){
    part_number=0;
    part_description=" ";
    qty=0;
    price_per_item=0.0;

}
void get_invoice(){
    cout<<"Enter values->"<<endl;
    cout<<"part number,description,qty,price";
    cin>>part_number>>part_description>>qty>>price_per_item;
    if(qty<0){
        qty=0;
    }
    if(price_per_item<0){
        price_per_item=0.0;
    }
    if(part_number<0){
        part_number=0;
    }
    
}
double getinvoiceamount(){
    double amount =qty*price_per_item;
    return amount;


}
void invoicetest(double n){
        cout<<endl;
        cout<<"detail->\n";
        cout<<part_number<<endl;
        cout<<part_description<<endl;
         cout<<qty<<endl;
         cout<< price_per_item<<endl;
         cout<<n;

    }

};
int main(){
    invoice obj1;
obj1.get_invoice();
cout<<"amount "<<obj1.getinvoiceamount();
obj1.invoicetest(obj1.getinvoiceamount());
return 0;


}