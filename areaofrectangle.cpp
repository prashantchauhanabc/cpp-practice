#include<iostream>
using namespace std;
int main(){
    int l,b;          //l = length, b = breadth
    cout<<"enter l :";
    cin>>l;
    cout<<"enter b :";
    cin>>b;
    int area = l * b;
    int perimeter = 2 * (l + b);
    if(area > perimeter){
        cout<<"area of rectangle is greater";
    }
    else if(perimeter > area){
        cout<<"perimeter of rectangle is greater";
    }
    else{
        cout<<"area of rectangle is equal to perimeter of rectangle";
    }
    return 0;
}