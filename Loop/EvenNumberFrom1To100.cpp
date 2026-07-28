#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number: ";
    cin>>b;
    cout<<"Enter a number: ";
    cin>>b;
    for(int i=1; i<=b; i++){
    if ( i % 2== 0){
            cout<< i << " ";
    }
        
    }
    return 0;
}