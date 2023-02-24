#include<iostream>
using namespace std;
int main(){
    int b;
    cout<<"Enter the number:";
    cin>>b;
    for(int a=1;a<=b;a++){
        if(a<=(b/2)+1){
        for(int j=1;j<=((b/2)+1)-a;j++){
            cout<<" ";
        }
        for(int k=1;k<=a*2-1;k++){
            if(k==1||k==a*2-1||a==1||a==(b/2)+1||k==a){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        }
    }
    for(int a=1;a<=(b/2);a++){
        for(int j=1;j<=a;j++){
            cout<<" ";
        }
        for(int k=1;k<=(b-a*2-1)+1;k++){
            if(k==1||k==(b-a*2-1)+1){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}