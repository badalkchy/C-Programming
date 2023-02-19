// A Fast IO example code
// Solution of Runtime =  0.41 seconds.

#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);                       // (NULL) or 0 , returns a NULL pointer.
      
    int n,k,t;
    int cnt=0;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>t;
        if(t % k == 0){
            cnt++;
        }
    }
    cout<<cnt<<"\n";     // "\n" also make execute faster than endl;
    return 0;
}

// ios_base::sync_with_stdio(false);
// It toggles on or off the synchronization of all the C++
// standard streams with their corresponding standard C streams
// if it is called before the program performs its first input or output operation.
// Adding ios_base::sync_with_stdio (false); (which is true by default) before any I/O operation avoids this synchronization.
//  It is a static member of the function of std::ios_base