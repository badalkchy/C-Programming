#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the number:";
    cin>>n1;
    cout<<"Enter the number:";
    cin>>n2;
    cout<<"Enter the number:";
    cin>>n3;
    cout<<max(n1,max(n2,n3))<<" is largest number";
}