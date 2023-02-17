#include<iostream>
using namespace std;
int Rmax(int arry[],int n){
    int max=0;
    for(int a=0;a<n;a++){
        if(max<arry[a]){
            max=arry[a];
        }
    }
    return max;
}
int main(){
    int arr[]={2,5,1,6,3,10,33,16};
    int max=Rmax(arr,8);
    cout<<"Largest element "<<max;
}