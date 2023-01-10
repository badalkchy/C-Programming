#include<bits/stdc++.h>
using namespace std;
int fact(int b){
    int c=1;
    for(int a=1;a<=b;a++){
        c=c*a;
    }
    return c;
}
int Strong(int num){
    int res=0,rem;
    int temp=num;
    while(num){
        rem=num%10;
        res=res+fact(rem);
        num=num/10;
    }
    return temp==res;
}
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    if(Strong(num)){
        cout<<"Strong Number";
    }
    else{
        cout<<"Not an Strong Number";
    }
}
