#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool prime = true;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
        prime =false;
        break;
        }
    }
    if(n == 1){
        cout<<"Neither Prime Nor Composite";
    }
    if(prime==false){
        cout<<"Composite number";
    }
    else{
        cout<<"Prime Number";
    }

}