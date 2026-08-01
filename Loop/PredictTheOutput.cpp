#include<iostream>
using namespace std;
int main(){
    int x=5,y=4;
    while(x>=0){
        x--;
        y++;
        if(x==y)
        continue;
        else
        cout<<x<< " "<<y<<endl;
    }
    return 0;
}