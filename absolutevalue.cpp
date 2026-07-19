#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    if(n<0){
        cout<<"the absolute value is :";
        cout<<-n;
    }
    else{
        cout<<"absolute value is :";
        cout<<n;
    }
    return 0;
}