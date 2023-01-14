#include<iostream>
using namespace std;
int Abundant(int num){
    int c=0;
    for(int a=1;a<=num/2;a++){
        if(num%a==0){
            cout<<a<<" ";
            c=c+a;
        }
    }
    cout<<" = "<<c<<endl;
    return(num<c);
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(Abundant(num)){
        cout<<"Abundant number";
    }
    else
    cout<<"Not an Abundant number";
}