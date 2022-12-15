#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%400==0){
        cout<<num<<" is a leap year";
    }
    else if(num%4==0 && num%100!=0){
        cout<<num<<" is a leap year";
    }
    else{
        cout<<num<<" is not a leap year";
    }
}