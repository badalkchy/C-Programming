#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number:";
    cin>>b;
    for(int a=1;a<=b;a++){
        for(int j=1;j<=b;j++){
            if(j<=b-a+1){
                cout<<"*";
            }
        }
        cout<<endl;
    }
}