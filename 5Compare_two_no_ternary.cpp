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
    largest=n1>n2? n1:n2;
    cout<<largest<<" is an largest number";
}
}