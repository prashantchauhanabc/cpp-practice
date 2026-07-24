#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number : ";
    cin>>number;
    if(number % 5 == 0){
        cout<<"the number is divisible by 5 ";
    }
    else if(number % 3 == 0){
        cout<<"not divisble by 3";
    }else{
        cout<<"number is invalid";
    }

    return 0;
}