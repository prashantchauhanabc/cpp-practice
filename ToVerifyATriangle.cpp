#include<iostream>
using namespace std;
int main(){
    int a,b,c;         //sides of a triangle
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    cout<<"enter c :";
    cin>>c;
    if((a+b>c) && (b+c>a) && (c+a>b)){
        cout<<"it is a triangle";
    }
    else{
        cout<<"it is not a triangle";
    }
    return 0;
}