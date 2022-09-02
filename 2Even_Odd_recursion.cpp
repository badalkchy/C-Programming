#include<iostream>
using namespace std;
int isEven(int a){
    return ((a&1)==0);
}

int main(){
int num1;
cout<<"Enter the Number:";
cin>>num1;
if(isEven(num1)){
    cout<<"Even";
}
else{
    cout<<"Odd";
}
}