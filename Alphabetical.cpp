#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter ch : ";
    cin>>ch;
    if((int)ch >= 65 && (int)ch <= 90){
        cout<<"uppercase alphabets";
    }
    else if((int)ch >=97 && (int)ch <= 122){
        cout<<"lowercase alphabets";
    }
    else if((int)ch >=0 && (int)ch >= 9){
        cout<<"digit";
    }
    else{
        cout<<"special character";
    }
    
    
    return 0;
}