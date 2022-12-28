#include<iostream>
#include<math.h>
using namespace std;
int order(int n){
    int d;
    int static c=0;
    if(n<1){
        d=c;
        return d;
    }
    c++;
    order(n/10);
}
void Armstrong(int n){
    int rem,res=0,temp=n;
    int length=order(n);
    while(n){
        rem=n%10;
        res=res+pow(rem,length);
        n=n/10;
    }
    if(res==temp){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not armstrong";
    }
}
int main(){
    int n,rem,res=0;
    cout<<"Enter the number:";
    cin>>n;
    Armstrong(n);
}