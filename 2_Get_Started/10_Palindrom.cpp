#include<iostream>
using namespace std;
int main(){
    int num,rem,reverse=0;
    cout<<"Enter the number:";
    cin>>num;
    int check=num;
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }
    if(check==reverse){
        cout<<"\n After reverse : "<<reverse<<" is a reversable\nGiven number is Palindrome";
    }
    else{
        cout<<"\n After reverse: "<<reverse<<" is not a reversable\nGiven number is not a Palindrome";
    }
}