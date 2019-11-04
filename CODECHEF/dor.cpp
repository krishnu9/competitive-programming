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
    ulli l,r;

    while (t--) {
        cin >> l >> r;

        ulli n = l;

        for(ulli i = l;i<=r;i++) {
            n = n|i;
        }
        cout << n << endl;
    }



    return 0;
}