#include<bits/stdc++.h>
using namespace std;
int power(int rem,int n){
    int c=1,d=0;
    for(int a=1;a<=n;a++){
        n=n/10;
        d++;
    }
    while(d>=0){
        c=c*rem;
        d--;
    }
    cout<<c<<endl;
    return c;
}
int Armstrong(int n){
    int temp=n;
    int res=0,rem;
    while(temp){
        rem=temp%10;
        res=res+power(rem,n);
        temp=temp/10;
    }
    return(n==res);
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(Armstrong(n)){
        cout<<"Armstrong ";
    }
    else{
        cout<<"Not an Armstrong";
    }
}