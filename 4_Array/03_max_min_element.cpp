#include<bits/stdc++.h>
using namespace std;
int Min(int arr[],int n){
    int min=INT_MAX;
    int max=INT_MIN;
    for(int a=0;a<n;a++){
        if(min>arr[a]){
            min=arr[a];
        }
        if(max<arr[a]){
            max=arr[a];
        }
    }
    cout<<"Maximum element are "<<max<<"\n";
    return min;
}
int main(){
    int arr[]={3,4,2,5,20,2,21};
    int length=sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum element are "<<Min(arr,length);
}