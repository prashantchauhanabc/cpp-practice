#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0) n=-n;
    if(n==0) cout<<"ones place";
    while(n>0){
        n%10<10;
        cout<<n%10 ;
        cout<<" is at ones place";

        break;
        
    }
    return 0;
}