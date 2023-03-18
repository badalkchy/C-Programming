#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int arr[n];
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }
    map<int,int>m;
    for(int a=0;a<n;a++){
        m[arr[a]]++;
    }
    map<int,int> ::iterator it;
    for(it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" --> "<<(*it).second<<endl;
    }
}