#include<iostream>
using namespace std;
int main(){
    int a,year,b,c,d,j,k;
    cout<<"Enter the number:";
    cin>>b;
    year = ((b%400==0)||(b%4==0 && b%100!=0))? 1:0;
    (year==1)? cout<<"Leap year":cout<<"Not leap year";
}