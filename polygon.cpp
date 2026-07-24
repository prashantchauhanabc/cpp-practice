#include<iostream>
using namespace std;
int main(){
    int n,sum;           //s = sum
    cout<<"enter n :";
    cin>>n;
    sum = (n - 2) * 180 ;
    if(sum == 180){
        cout<<"it is a polygon";
    }
    else{
        cout<<"not a polygon";
    }
    return 0;
}