#include<iostream>
using namespace std;
int c=0;
void Sumn(int a){  //4
    if(a<=0){
        return;
    }
    c+=a;
    cout<<a<<" ";
    Sumn(a-1);
     cout<<a<<" ";
    
    //return c;
}
int main(){
    int a,b,c,n;
    cout<<"Enter the number:";
    cin>>b;
    Sumn(b);
}