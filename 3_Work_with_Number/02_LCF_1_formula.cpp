#include<bits/stdc++.h>
using namespace std;
int main(){
    int lcm,n,m;
    cout<<"Enter the no :";
    cin>>n;
    cout<<"Enter the no :";
    cin>>m;
    for(int a=1;a<=m||a<=n;a++){
        if(n%a==0 && m%a==0){
            lcm=a;
        }
    }
    lcm=n*m/lcm;
    cout<<lcm;
}