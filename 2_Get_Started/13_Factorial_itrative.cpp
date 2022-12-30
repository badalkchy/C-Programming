#include<iostream>
using namespace std;
void Fact(int num){
    int static c=1;
    if(num<=0){
        cout<<"="<<c;
        return;
    }
    c=c*num;
    cout<<"*"<<num;
    Fact(num-1);
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    Fact(num);
}