#include<iostream>
using namespace std;
int main(){
    int a,b,ans;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    if (a % b == 0){
        ans = a/b;
    }
    else{
        ans = (a/b)+1;
    }
    cout<<"answer is : "<<ans;

    return 0;
}
