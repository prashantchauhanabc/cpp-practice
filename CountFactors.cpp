#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int factors =0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
        factors++;
        }
    }
    if(factors == 1){
        cout<<"Neither Prime Nor Composite";
    }
    if(factors >=3){
        cout<<"Composite numbers";
    }
    else{
        cout<<"Prime Number";
    }

    return 0;
}