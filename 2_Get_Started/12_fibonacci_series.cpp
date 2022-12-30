#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,num,nextTerm;
    cout<<"Enter the number:";
    cin>>num;
    c=0,d=1;
    cout<<c<<" "<<d<<" ";
    for(a=2;a<=num;a++){
        nextTerm = c+d;
        c=d;
        d=nextTerm;
        cout<<nextTerm<<" ";
    }
}

// Mathematical :  Fn = (fn-2) + (fn-1) ;
// F0 = 0  F1 = 1 ;