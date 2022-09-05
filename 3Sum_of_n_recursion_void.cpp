#include<iostream>
using namespace std;
int c=0,n;
void Sumn(int a){
    if(a<=0){
        return;
    }
    c=c+a;
    cout<<"+"<<a;
    Sumn(a-1);
    if(a==n){
    cout<<"="<<c;
    }
}
int main(){
    cout<<"Enter the number:";
    cin>>n;
    Sumn(n);
}