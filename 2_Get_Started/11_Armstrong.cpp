#include<iostream>
#include<math.h>
using namespace std;
int order(int num){
    int c=0;
    while(num){
        c++;
        num=num/10;
    }
    return c;
}
bool armstrong(int num, int length){
    int reverse=0,rem;
    int temp=num;

    while(num!=0){
        rem=num%10;
        reverse=reverse+pow(rem,length);
        num=num/10;
    }
    return temp==reverse;
}
int main(){
    int num,length;
    cout<<"Enter the number:";
    cin>>num;
    length=order(num);
    if(armstrong(num,length)){
        cout<<num<<" is an Armstrong number";
    }
    else{
        cout<<num<<" is not an Armstrong number";
    }
}