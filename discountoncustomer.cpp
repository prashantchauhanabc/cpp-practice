#include<iostream>
using namespace std;
int main(){
    double  m,d,t,price;          // m = marked price, d = discount, t = tx
    cout<<"enter m :";
    cin>>m;
    cout<<"enter d :";
    cin>>d;
    cout<<"enter t :";
    cin>>t;
    double discount_price = m - d/100 * m;
    double final_price = discount_price * (1 + t/100);
    cout<<"the final amount the customer pays is :";
    cout<<final_price;
    return 0;
}