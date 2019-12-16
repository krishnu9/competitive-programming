#include<bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
#define mod 1000000007

using namespace std;

lli power(lli x, lli y, lli p) 
{ 
    lli res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 

int main() {
    ios_base::sync_with_stdio(0);

    int T, K;
    cin>>T;
    while(T--){
        cin>>K;
        lli c;
        c = 10 * power(2,K-1,mod);
        cout<<c%mod<<endl;
    }
}