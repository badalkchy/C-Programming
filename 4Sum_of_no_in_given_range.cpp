#include<iostream>
using namespace std;
int main(){
    int a,b,c,n,d=0;
    cout<<"Enter the initial number:";
    cin>>c;
    cout<<"Enter the final value:";
    cin>>b;
    for(a=c;a<=(b+c)-1;a++){
        d=d+a;
        cout<<a<<"+";
    }
    cout<<" = "<<d;
}