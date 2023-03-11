#include<bits/stdc++.h>
using namespace std;
void Half(int *arr,int n){
    for(int a=0;a<n;a++){
        if(a<n/2){
            for(int j=a+1;j<n/2;j++){
                if(arr[a]>arr[j]){
                    int temp=arr[a];
                    arr[a]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        else{
            for(int j=a+1;j<n;j++){
              if(arr[a]<arr[j]){
                    int temp=arr[a];
                    arr[a]=arr[j];
                    arr[j]=temp;
                }  
            }
        }
    }
    return;
}
int main(){
    int arr[]={7,6,3,5,4,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    Half(arr,n);
    for(int a=0;a<n;a++){
        cout<<arr[a]<<" ";
    }
}