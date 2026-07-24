#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter x :";
    cin>>x;
    cout<<"enter y :";
    cin>>y;
    int product = x * y;
    if(product < 0){
        cout<<"product is negative";
    }
    else if(product  > 0){
        cout<<"product id positive";
    }
    else if(product == 0){
        cout<<"product is zero";
    }
    else{
        cout<<"invalid number";
    }
    return 0;
}