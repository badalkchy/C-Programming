#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter the number:";
    cin>>n1;
    cout<<"Enter the number:";
    cin>>n2;
    cout<<"Enter the number:";
    cin>>n3;
    int temp = n1>n2? n1:n2;
    int result = temp>n3? temp:n3;
    cout<<result<<" is greater";
}
// Time Complexity : O(1)