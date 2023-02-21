#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number:";
    cin>>b;
    int c=b*50/100;
    for(int a=1;a<=b;a++){
        for(int j=1;j<=a;j++){
            cout<<" ";
        }
        if(b%2==0)
        for(int k=1;k<=b+c;k++){
            cout<<"*";
        }
        else{
            for(int k=1;k<=b+c+1;k++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}