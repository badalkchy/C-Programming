#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the first number :";
    cin>>n;
    cout<<"Enter the second number :";
    cin>>m;
    cout<<"Addition of both is : "<<n+m<<"\n";      // \n takes less time complexity
    cout<<"Subtraction of both is  : "<<m-n<<"\n";
    cout<<"Division of both is : "<<m/n<<"\n";
    cout<<"Multiplication of both is : "<<m*n<<endl; // endl takes more time complexity than \n
}