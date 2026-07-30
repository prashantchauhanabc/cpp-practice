#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2; i<=n-1; i++){
        if(n%i ==0){
            cout<<"Composite Number";
            break;}
        }
    
    if(i==n){
        cout<<"Prime number";
    }
    return 0;
    }