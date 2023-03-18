#include<bits/stdc++.h>
using namespace std;                //  t = O(nlogn)
void Freq(int arr[],int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]=m[arr[i]]+1;
    }
    for(auto it : m){                            // each value of map store in it
        cout<<it.first<<" : "<<it.second<<"\n"; //  value of map are always in pair
    }
}
int main(){
    int arr[]={2,4,4,2,3,4,1,1,1,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    Freq(arr,n);
}