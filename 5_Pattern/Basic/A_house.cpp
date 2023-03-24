#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number:";
    cin>>b;
    int c=(b*2-1)*45/100;
    int d=(b*2-1)*58/100;
    for(int a=1;a<=b;a++){
        if(a<=b/2){
            cout<<"";
        }
        else{
        for(int j=1;j<=b-a;j++){
            cout<<" ";
        }
        for(int k=1;k<=a*2-1;k++){
            cout<<"*";
        }
        cout<<endl;
        }
    }
    for(int a=1;a<=b/2;a++){
        for(int j=1;j<=b*2-1;j++){
            if(j>=c && j<=d){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}