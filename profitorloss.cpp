#include<iostream>
using namespace std;
int main(){
    double cp,sp;             //sp = selling price , cp = cost price
    cout<<"enter cost price :";
    cin>>cp;
    cout<<"enter selling price :";
    cin>>sp;
    double profit = (sp - cp);
    double loss = (cp - sp);
    double profitpercentage = (profit/cp) * 100 ;
    double losspercentage = (loss/cp) * 100 ;
    if(sp > cp){
        cout<<"seller has made profit,profit is :"; 
        cout<<profit<<endl;
        cout<<"profit percentage :";
        cout<<profitpercentage<<endl;
    }
    else if(sp < cp ){
        cout<<"seller has not made profit,profit is :";
        cout<<loss<<endl;
        cout<<"loss percentage :";
        cout<<losspercentage<<endl;
        }
        else{
            cout<<"no profit,no loss";

        }
    return 0;
}