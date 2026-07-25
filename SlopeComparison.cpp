#include<iostream>
using namespace std;
int main(){
    float x1,x2,y1,y2,x3,y3;
    cout<<"enter x1 :";
    cin>>x1;
    cout<<"enter x2 :";
    cin>>x2;
    cout<<"enter y1 :";
    cin>>y1;
    cout<<"enter y2 :";
    cin>>y2;
    cout<<"enter x3 :";
    cin>>x3;
    cout<<"enter y3 :";
    cin>>y3;
    float f1 = (y2 - y1) * (x3 - x2);
    float f2 = (y3 - y2) * (x2 - x1);
    if(f1 == f2){
        cout<<"points are collinear";
    }
    else{
        cout<<"points are not collinear";
    }
    return 0;
}
