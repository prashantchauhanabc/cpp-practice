#include<iostream>
using namespace std;
int main(){
    int units;
    double Bill;
    cout<<"Enter Units : ";
    cin>>units;
    if(units <= 100){
        Bill = (units * 1.5);
    }
    else if(units <= 300){
        Bill = (100 * 1.50) + (units - 100) * 2.5;
    }
    else if(units >=300){
        Bill = (100 * 1.50) + (200 - 100) * 2.50 + (units - 300) * 4.0;
    }
    else{
        cout<<"Invalid input";
    }
    Bill = Bill + (0.15 * Bill);
    cout<<"Total Bill = $"<<Bill;
    return 0;
}