#include<bits/stdc++.h>
using namespace std;
void Sumn(int arr[],int n){
    int static sum=0;
    int static a=0;
    if(n<1){
        cout<<sum;
        return;
    }
    sum=sum+arr[a];
    a++;
    Sumn(arr,n-1);
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    Sumn(arr,n);
}