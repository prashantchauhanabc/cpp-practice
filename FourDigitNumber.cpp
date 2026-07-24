#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number : ";
    cin>>number;
    if((number >= 1000)&&(number <= 9999)){
        cout<<"it is a 4 digit number";
    }
    else if((number <= -1000)&&(number >= -9999)){
        cout<<"it is a 4 digit number";
    }
    else{
        cout<<"it is not a 4 digit number";
    }
    
    return 0;
}