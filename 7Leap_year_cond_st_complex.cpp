#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%4==0){
        if(num%100==0){
            if(num%400==0){
                cout<<"Leap year";
            }
            else{
                cout<<"Not Leap year";
            }
        }
        else{
            cout<<"leap year";
        }
    }
    else{
        cout<<"No leap year";
    }
}