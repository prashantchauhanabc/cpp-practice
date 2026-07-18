#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    int rem = (n%7);
    cout<<"the minimum number that must be added in n is :"<<endl;
    cout<<(7-rem);

    return 0;
}