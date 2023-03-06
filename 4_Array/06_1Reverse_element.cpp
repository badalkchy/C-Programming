#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of input:";
    cin>>n;
    int arr[n]={};
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }
    for(int a=n-1;a>=0;a--){
        cout<<arr[a]<<" ";
    }
}