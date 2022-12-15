#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,j,k;
    cout<<"Enter the number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    cout<<"Enter the third number:";
    cin>>c;
    cout<<max(a,max(b,c))<<" is a largest number";
    cout<<"\n"<<min(a,min(b,c))<<" is a smallest number"<<endl;
    if(a>b){
        if(a<c){
            cout<<a<<" is an intermedian number";
        }
        else if(a>c){
            if(b>c){
                cout<<b<<" is an intermedian number";
            }
            else{
                cout<<c<<" is an intermedian number";
            }
        }
    }
    else if(b<c){
        cout<<b<<" is an intermedian number";
    }
    else{
        cout<<c<<" is a intermedian number";
    }
}