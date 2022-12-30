#include<iostream>
using namespace std;
int Fib(int num){
    static int nextTerm, t1=0,t2=1;
    if(num>0){
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
        cout<<nextTerm<<" ";
        Fib(num-1);
    }
}
int main(){
    int a,b,c,d,num,nextTerm;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"0 1 ";
    Fib(num-2);
}