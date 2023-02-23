#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter the number:";
    cin>>b;
    for(int a=1;a<=b;a++){
        for(int j=1;j<=a-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=(b*2)-(a*2-1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}