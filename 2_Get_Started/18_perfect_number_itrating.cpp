#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number:";
    cin>>num;
    for(int a=1;a<=num/2;a++){
        if(num%a==0){
            cout<<a<<" ";
            sum=sum+a;
        }
    }
    cout<<"="<<sum;
    if(sum==num){
        cout<<"\n"<<num<<" is a Perfect number";
    }
    else{
        cout<<"\n"<<num<<" is not a Perfect number";
    }
}