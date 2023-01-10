#include<iostream>
using namespace std;
int static sum=0;
int Perfect(int num,int a){
    if(a<=num/2){
        if(num%a==0){
            sum=sum+a;
        }
        a++;
        Perfect(num,a);
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(Perfect(num,1)==num){
        cout<<num<<" is a Perfect number";
    }
    else{
        cout<<num<<"is not a Perfect number";
    }
}