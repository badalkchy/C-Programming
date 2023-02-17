#include<bits/stdc++.h>
using namespace std;
int Min(int arr[],int n){
    int min=INT_MAX;
    for(int a=0;a<n;a++){
        if(min>arr[a]){
            min=arr[a];
        }
    }
    return min;
}
int main(){
    int arr[]={3,4,2,5,20,2,21};
    int length=sizeof(arr)/sizeof(arr[0]);
    cout<<Min(arr,length);
}