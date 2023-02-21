#include<iostream>
using namespace std;
int main(){
    int a,b,d,j,k;
    cout<<"Enter the number:";
    cin>>b;
    d=0+b;
    for(a=1;a<=b;a++){
        for(j=1;j<=d;j++){
            cout<<" *";
        }
        d--;
        cout<<endl;
        for(k=1;k<=a;k++){
            cout<<"  ";
        }
    }
}