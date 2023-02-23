#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,j,k;
    cout<<"Enter the number of rows:(odd)";
    cin>>b;
    for(a=1;a<=b;a++){
        if(a<=b/2){
        for(j=1;j<=b;j++){
            if(j<=a){
                cout<<"*";
            }
        }
        cout<<endl;
        }
        else{
            for(j=1;j<=b-a+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}