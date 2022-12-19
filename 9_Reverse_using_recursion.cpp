#include<iostream>
using namespace std;
int Reverse(int num,int reverse){
    if(num==0){
        return reverse;
    }
    int rem=num%10;
    Reverse(num/10,reverse=reverse*10+rem);
}
int main(){
    int num,reverse;
    cout<<"Enter the number:";
    cin>>num;
    cout<<Reverse(num,reverse=0);
}