#include<bits/stdc++.h>
using namespace std;
bool Perfect(long double x){        //double make no. as a fraction mean (_.5645) long make larger (_.56454095....)
    if(x>=0){
        long long square=sqrt(x);
        return (square*square==x);
    }
}
int main(){
    long long x;                    //larger to larger possible no.
    cout<<"Enter the number:";
    cin>>x;
    if(Perfect(x)){
        cout<<"True";
    }
    else
    cout<<"False";
}