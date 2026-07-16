#include<iostream>
using namespace std;
int main(){
    float radius ,volume ;
    cout<<"enter the radius :";
    cin>>radius;
    volume = (4.0/3.0) * 3.141592 * radius * radius *radius ;
    cout<<"volume of sphere :";
    cout<<volume<<endl;
    return 0;

}