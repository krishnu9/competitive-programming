#include<bits/stdc++.h>
typedef long long int lli;

//comments look like this

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);

    lli T;
    cin>>T;

      lli n;
      
      lli L[1000005];
      for(lli i = 0; i<1000001; i++)
        L[i] = i + 1;


      lli sum;
      for(lli i = 0; i<1000000; i++){
        lli X = L[i];
        lli Y = L[i+1];
        sum = X+Y+X*Y;
        L[i+1] = sum%1000000007;
      }
      for(lli j=0;j<T;j++){
        cin>>n;
        cout<<L[n-1]<<endl;
      }
    
  return 0;
}