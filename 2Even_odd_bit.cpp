#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the number:";
    cin>>b;
    if((b & 1) == 0){
        cout<<b<<" is an even number";
    }
    else{
        cout<<b<<" is an odd number";
    }
}