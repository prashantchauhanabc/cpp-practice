#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    cout<<"enter c :";
    cin>>c;
    if((a + b > c)&&(b + c >a)&&(c + a > b)){
        if((a == b)&&(b == c)){
            cout<<"Equilateral Triangle";
        }
            else if((a == b)||(b == c)||(c == a)){
                
                cout<<"Isoceles  Triangle";
            }
            else{
                cout<<"Scalene Triangle";
            }
            
        
    }
    else{
        cout<<"Invalid Triangle";
    }
    return 0;
}