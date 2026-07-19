#include<iostream>
using namespace std;
int main(){
    double num;
    cout<<"enter the value of num :";
    cin>>num;
    int x = (int)num;
    if(x == num){
        cout<<"it is an integer";
    }
    else{
        cout<<"it is not an integer"; 
    }

    return 0;
}