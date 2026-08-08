#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number: ";
    cin>>b;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=b; j++){
            cout<<(char) (i+64)<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}