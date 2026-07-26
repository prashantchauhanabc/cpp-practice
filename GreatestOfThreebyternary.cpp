#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter c: ";
    cin>>c;
    int greatest = (a>b) ? ((a>c) ? a:c) : ((b>c) ? b : c);
    cout<<"Greatest =";
    cout<<greatest;
    return 0;
}