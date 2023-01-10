#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,a;
    cout<<"Enter the number:";
    cin>>num;
    cout<<"Factor's of "<<num<<" are ";
    for(a=1;a<=num;a++){
        if(num%a==0){
            cout<<a<<",";
        }
    }
}