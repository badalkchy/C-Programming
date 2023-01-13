#include<bits/stdc++.h>
using namespace std;
int Perfect(int num){
    int static temp=num;
    int static c=0;
    if(num==num/2){
        return c;
    }
    if(temp%num==0){
        if(temp==num){
            cout<<" ";
        }
        else{
            cout<<num<<" ";
            c=c+num;
        }
    }
    Perfect(num-=1);
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    cout<<Perfect(num);
    // if(Perfect(num)){
    //     cout<<"Perfect number";
    // }
    // else{
    //     cout<<"Not an perfect number";
    // }
}