#include<iostream>
using namespace std;
int main(){
    int num1,num2,hcf;
    cout<<"Enter the number first:";
    cin>>num1;
    cout<<"Enter the number Second:";
    cin>>num2;
    for(int a=1;a<=num1||a<=num2;a++){
        if(num1%a==0 && num2%a==0){
            hcf=a;
        }
    }
    cout<<"Highest common Factor of "<<num1<<" & "<<num2<<" is "<<hcf;
}