#include<iostream>
using namespace std;
void Sec_smallest(int arr[],int n){
    int small=arr[0];
    for(int a=0;a<n;a++){
        if(small>arr[a]){
            small=arr[a];
        }
    }
    int sec_small,b;
    b=n;
    while(b){
        if(sec_small>arr[b] && arr[b]!=small){
            sec_small=arr[b];
        }
        b--;
    }
    cout<<sec_small<<" is second smallest number ";
    return;
}
int main(){
    int arr[]={1,3,5,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    Sec_smallest(arr,n);
}