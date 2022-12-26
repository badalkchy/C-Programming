#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int order(int num){
    int c=0;
    while(num){
        num=num/10;
        c++;
    }
    return c;
}
void Armstrong(int initial, int final){
    for(int num=initial;num<=final;num++){
        int sum=0,temp,rem,length;
        temp=num;
        length=order(num);
        while(temp){
            rem=num%10;
            sum=sum+pow(rem,length);
            temp=temp/10;
        }
        if(sum==num){
            cout<<num<<", ";
        }
    }
    return;
}
int main(){
    int initial, final;
    cout<<"Enter the initial number:";
    cin>>initial;
    cout<<"Enter the final number:";
    cin>>final;
    Armstrong(initial,final);
    return 0;
}
