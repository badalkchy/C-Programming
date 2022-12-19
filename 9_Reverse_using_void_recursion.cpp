#include<iostream>
using namespace std;
void Reverse(int num,int reverse,int a){
    int rem;
    if(num==0){
        return;
    }
    rem=num%10;
    cout<<rem;
    Reverse(num=num/10, reverse, a);
}
int main(){
    int num,rem,reverse,a;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"After reverse: ";
    Reverse(num,reverse=0,a);
}