#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number: ";
    cin>>b;
    cout<<"Enter a number: ";
    cin>>b;
    for(int i=a; i<=b; i++){
    if ( i % 3== 0){
            cout<< i << " ";
    }
        
    }
    return 0;
}