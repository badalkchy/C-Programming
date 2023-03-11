#include<bits/stdc++.h>
using namespace std;
void Sort(int arr[],int n){
    int temp;
    for(int a=0;a<n-1;a++){
        for(int j=a+1;j<n;j++){
            if(arr[a]>arr[j]){
            temp=arr[a];
            arr[a]=arr[j];
            arr[j]=temp;
            }
        }
    }
    for(int a=0;a<n;a++){
        cout<<arr[a]<<" ";
    }
}
int main(){
    int arr[]={3,2,4,6,1,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    Sort(arr,n);
}