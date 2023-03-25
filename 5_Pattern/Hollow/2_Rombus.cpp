#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int a=1;a<=n;a++){
        for(int j=1;j<=a-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
            if(k==1||k==n||a==1||a==n){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}