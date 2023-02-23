#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter the number:";
    cin>>b;
    for(int a=1;a<=b;a++){
        for(int j=1;j<=b-a;j++){
            cout<<" ";
        }
        for(int k=1;k<=a*2-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}