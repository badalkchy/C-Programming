#include<iostream>
using namespace std;
void Isfact(int num){
    int static c=1;
    if(num==0){
        return;
    }
    c=c*num;
    cout<<"*"<<num;
    if(num==1){
        cout<<" = "<<c;
    }
    Isfact(num-1);
}
int main(){
    int a,b,c,d;
    cout<<"Enter the number:";
    cin>>b;
    Isfact(b);
}