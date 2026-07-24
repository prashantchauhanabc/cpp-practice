#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter a year : ";
    cin>>year;
    if(year % 4 == 0){
        cout<<"it is a leap year";
    }
    else if(year % 400 == 0){
        cout<<"it is a leap year";
    }
    else{
        cout<<"not a lap year";
    }

    return 0;
}