#include<iostream>
using namespace std;
int main(){
    int b,c;
    cout<<"Enter the number:";
    cin>>b;
    for(int a=1;a<=b;a++){
        for(int j=1;j<=b-a;j++){
            cout<<" ";
        }
        for(int k=0;k<a;k++){
            cout<<a+k;
        }
        cout<<endl;
    }
}