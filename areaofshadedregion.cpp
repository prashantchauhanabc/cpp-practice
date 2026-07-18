#include<iostream>
using namespace std;
int main(){
    float r,a;
    cout<<"enter the value of r :";
    cin>>r;
    float area1 = 3.14 * r * r;
    cout<<"the area of circle is :";
    cout<<area1<<endl;
    cout<<"enter the value of a :";
    cin>>a;
    float area2 = a*a;
    cout<<"the area of the square is :";
    cout<<area2<<endl;
    cout<<"the area of the shaded region is :";
    float area3 = (area2) - (area1);
    cout<<area3<<endl;

    return 0;

}