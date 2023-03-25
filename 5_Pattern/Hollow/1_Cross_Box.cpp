#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    for(int a=1;a<=n;a++){
        for(int j=1;j<=n;j++){
            if(a==1||a==n||j==1||j==n||j==a||j==(n-a)+1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}