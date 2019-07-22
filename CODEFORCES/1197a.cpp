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
int t;
cin >> t;
    int n;

while(t--){
    cin >> n;
    int A[n];
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(A,A+n,greater<int>());
    if( min(A[0],A[1]) >= n - 2 + 1)    cout << n - 2;
    else cout << min(A[0],A[1]) - 1;
    cout << endl;
}

return 0;
}