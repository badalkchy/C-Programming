#include<iostream>
using namespace std;
int main(){
    int num,reverse=0,rem;
    cout<<"Enter the number:";
    cin>>num;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    cout<<"After reverse: \n"<<reverse;
}