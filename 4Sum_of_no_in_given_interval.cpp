#include<iostream>
using namespace std;
int main(){
    int a,b,n,c=0,d;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"Enter the final number:";
    cin>>n;
    for(a;a<=n;a++){
        c=c+a;
        cout<<"+"<<a;
    }
    cout<<"="<<c;
    return 0;
}