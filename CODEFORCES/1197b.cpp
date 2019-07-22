#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007
int main()
{
ios_base::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
int n;
cin >> n;
int A[n],B[n];
//memset(B,1,sizeof(B));

string ans = "YES";

for(int i=0;i<n;i++){
    cin >> A[i];
}

for(int i=1;i<n-1;i++){
   if(A[i-1]>A[i] && A[i+1]>A[i]){
       ans = "NO";
       break;
   }
}
cout << ans;
return 0;
}