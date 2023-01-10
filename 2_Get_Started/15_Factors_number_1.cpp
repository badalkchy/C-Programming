#include<bits/stdc++.h>
using namespace std;

void IsFactor(int b){
    for(int a=1;a<=sqrt(b);a++){
        if(b%a==0){
            if(a==b/a){
                cout<<a<<" ";
            }
            else{
                cout<<a<<" "<<b/a<<" ";
            }
        }
    }
}

int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    IsFactor(num);
}