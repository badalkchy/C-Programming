#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,n;
    cout<<"Enter the initial number:";
    cin>>a;
    cout<<"Enter the final number:";
    cin>>b;
    /* Formula */
    c=b*(b+1)/2-a*(a+1)/2+a;
    cout<<c;
    return 0;
}