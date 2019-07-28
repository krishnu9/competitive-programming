#include <bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(0);

    int T;
    cin >> T;

    while (T--)
    {

        ulli n, k;
        cin >> n >> k;

        lli a = k - 1, d = n - 1;
        lli t = a / d;
        lli l = a - t * d;
        t++;

        lli sum = a + l;
        if (sum & 1)
            t /= 2;
        else
            sum /= 2;

        sum = ((sum % mod) * (t % mod)) % mod;

        cout << sum << endl;
    }

    return 0;
}