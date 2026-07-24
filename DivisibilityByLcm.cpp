#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a :";
    cin>>a;
    if(a % 15 == 0){
        cout<<"number is divisible by 5 and 3";
    }
    else{
        cout<<"not divisible by 5 and 3";
    }

    return 0;
}