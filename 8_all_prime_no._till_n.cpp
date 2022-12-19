#include<iostream>
using namespace std;
int main(){
    int a,b,c=0,d,j;
    cout<<"Enter the number:";
    cin>>b;
    for(a=2;a<=b;a++){
        for(j=2;j<=b;j++){
            if(a%j==0){
                c++;
            }
        }
        if(c==1){
            cout<<a<<", ";
        }
        c=0;
    }
    cout<<" is a prime number";
}