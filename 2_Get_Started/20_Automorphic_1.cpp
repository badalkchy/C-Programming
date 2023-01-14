#include<iostream>
using namespace std;
int c=0;
int order(int num){
    if(num==0){
        return c;
    }
    c++;
    order(num/10);
}
int Auto(int num){
    int square=num*num,rem,res=0,ans=0;
    int digit=order(num);
    for(int a=1;a<=digit;a++){
        rem=square%10;
        res=res*10+rem;
        square=square/10;
    }
    for(int a=1;a<=digit;a++){
        rem=res%10;
        ans=ans*10+rem;
        res=res/10;
    }
    return(ans==num);
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(Auto(num)){
        cout<<"Automorphic";
    }
    else
    cout<<"Not an Automorphic";
}