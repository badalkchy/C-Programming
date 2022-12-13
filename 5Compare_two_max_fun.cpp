#include<iostream>
using namespace std;
int main(){
int largest,b,c,n1,n2;
cout<<"Enter the number:";
cin>>n1;
cout<<"Enter the number:";
cin>>n2;
if(n1==n2) cout<<"Both are equal";
else{
    cout<<max(n1,n2)<<" is a largest number";
}
}