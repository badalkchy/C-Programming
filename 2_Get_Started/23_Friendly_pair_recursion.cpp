#include<iostream>
using namespace std;
int Friendly(int num){
    int c=0;
    for(int a=1;a<num;a++){
        if(num%a==0){
            c=c+a;
            cout<<"+"<<a;
        }
    }
    cout<<" = "<<c<<endl;
    return c;
}
int main(){
    int num1,num2, sum1,sum2;
    cout<<"Enter the number 1 :";
    cin>>num1;
    cout<<"Enter the number 2 :";
    cin>>num2;
    sum1=Friendly(num1);
    sum2=Friendly(num2);
    cout<<sum1/num1<<" "<<sum2/num2<<endl;
    if(sum1/num1==sum2/num2)
    cout<<num1<<" & "<<num2<<" are friendly pair";
    else
    cout<<"Not an friendly pair";
}