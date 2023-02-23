#include<iostream>
using namespace std;
int main(){
    int b,c=0;
    cout<<"Enter the number:";
    cin>>b;
    for(int a=1;a<=b;a++){
        if(a<=b/2){
            for(int j=1;j<=((b+1)/2)-a;j++){
                cout<<" ";
            }
            for(int k=1;k<=a;k++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            c++;
            for(int j=1;j<=(c)-1;j++){
                cout<<" ";
            }
            for(int k=1;k<=(b)-a+1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}