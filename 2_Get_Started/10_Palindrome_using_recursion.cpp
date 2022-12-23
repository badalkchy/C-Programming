#include<iostream>
using namespace std;
int Reverse(int num, int reverse){
    if(num==0){
        cout<<reverse;
        return 0;
    }
    int rem=num%10;
    reverse=reverse*10+rem;
    Reverse(num/10,reverse);
}
int main(){
    int num,rem,reverse=0;
    cout<<"Enter the number:";
    cin>>num;
    if(Reverse(num, reverse)==num){
        cout<<" is a reversable\n Given number is a palindrome";
    }
    else{
        cout<<" is not a reversable\n Given number is not a palindrome";
    }

}