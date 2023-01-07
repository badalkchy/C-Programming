#include<iostream>
using namespace std;
int main(){
    int exp;
    double res=1.0,base;
    cout<<"Enter the base number:";
    cin>>base;
    cout<<"Ente the exponential:";
    cin>>exp;
    while(exp!=0){
        res=res*base;
        exp=exp-1;
        cout<<"*"<<base;
    }
    cout<<" = "<<res;
}