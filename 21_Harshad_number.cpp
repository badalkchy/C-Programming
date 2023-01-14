#include<iostream>
using namespace std;
int Harshad(int num){
    int rem,res=0;
    int temp=num;
    while(num){
        rem=num%10;
        res=res+rem;
        num/=10;
    }
    return(temp%res==0);
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(Harshad(num)){
        cout<<"Harshad Number";
    }
    else
    cout<<"Not Harshad Number";
}