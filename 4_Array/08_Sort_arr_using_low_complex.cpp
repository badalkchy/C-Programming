#include<iostream>
using namespace std;
int Sort(int arr[],int a,int n){
    for(int j=0+a;j<n;j++){
        if(arr[a]>arr[j]){
            int temp=arr[a];
            arr[a]=arr[j];
            arr[j]=temp;
        }
    }
    cout<<arr[a]<<" ";
    return arr[a];
}
int main(){
    int arr[]={3,45,2,5,7,2,0,1,4,8,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int a=0;a<n;a++){
        Sort(arr,a,n);
    }
}