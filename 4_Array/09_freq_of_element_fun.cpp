#include<bits/stdc++.h>
using namespace std;
void freq(int arr[],int n,int flag[],int a){
    int count=0;
    if(flag[a]!=1){
        for(int j=0+a;j<n;j++){
            if(arr[a]==arr[j]){
                flag[j]=1;
                count++;
            }
        }
        cout<<arr[a]<<" : "<<count<<endl;
    }
    return;
}
int main(){
    int arr[]={2,3,4,5,6,2,3,4,5,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int flag[n]={0};
    for(int a=0;a<n;a++){
        freq(arr,n,flag,a);
    }
}