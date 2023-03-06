#include<bits/stdc++.h>
using namespace std;                             // t= Order(n) ;
int sum(int arr[],int index,int n){             //  space = Order(1) ;
    if(index==n-1){
        return arr[index];
    }
    return arr[index]+sum(arr,index+1,n);
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int arr[n];
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }
    cout<<sum(arr,0,n);
}