#include<iostream>
using namespace std;
int main(){
    int num1,num2,lcf;
    cout<<"Enter the number:";
    cin>>num1;
    cout<<"Enter the number:";
    cin>>num2;
    int max=(num1>num2)? num1:num2;
    for(int a=max;a<=num1*num2;a++){
        if(a%num1==0 && a%num2==0){
            lcf=a;
        }
    }
    cout<<lcf;
}