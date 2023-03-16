#include<bits/stdc++.h>
using namespace std;
void Sorted(int arr[],int n){
    sort(arr,arr+n);
    for(int a=0;a<n;a++){
        cout<<arr[a];
    }
    return;
}
int main(){
    int arr[]={6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    Sorted(arr,n);
}