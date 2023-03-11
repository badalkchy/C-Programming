#include<bits/stdc++.h>
using namespace std;
void asdes(int arr[],int n){
    int temp;
    for(int a=0;a<n;a++){
        for(int j=0;j<(n/2);j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        for(int j=n/2;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}
int main(){
    int arr[]={3,4,0,1,10,40,30,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    asdes(arr,n);
    return 0;
}