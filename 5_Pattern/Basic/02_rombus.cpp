#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,a;
    cout<<"Enter the number:";
    cin>>b;
    for(int a=1;a<=b;a++){
        for(int j=1;j<=a-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=b;k++){
            cout<<" *";
        }
        cout<<endl;
    }
}