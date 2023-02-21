#include<bits/stdc++.h>
using namespace std;
int main(){
    int b,a;
    cout<<"Enter the number:";
    cin>>b;
    int c=b*50/100;
    for(int a=1;a<=b;a++){
        for(int j=1;j<=b+c+1;j++){
            if(b%2==0){
                if(j<=b+c){
                   cout<<" *"; 
                }
            }
            else{
                if(j<=b+c+1){
                    cout<<" *";
                }
            }
        }
        cout<<endl;
    }
}