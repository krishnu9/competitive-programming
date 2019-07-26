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

        ulli total = (k - 1) / (n - 1);

        ulli first = k - 1, last = first - (k - 1);

        ulli terms = l / d + 1;

        lli sum = (terms * ((2 * l % mod) - ((terms - 1) * d) % mod)) % mod;
        sum = (sum * 500000004) % mod;

        cout << sum << endl;
    }

    return 0;
}