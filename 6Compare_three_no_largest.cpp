#include<iostream>
using namespace std;
int main(){
    int a,n1,n2,n3;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the second number:";
    cin>>n2;
    cout<<"Enter the third number:";
    cin>>n3;
    if(n1==n2==n3){
    cout<<"All equall";
    }
    else if(n1>n2){
        if(n1>n3){
            cout<<n1<<" is a greater";
        }
        else{
            cout<<n3<<" is a greater";
        }
    }
    else{
        if(n2>n3){
            cout<<n2<<" is a greater";
        }
        else{
            cout<<n3<<" is a greater";
        }
    }
    // cout<<"\n"<<min(n1,min(n2,n3))<<" is a smallest number";
}