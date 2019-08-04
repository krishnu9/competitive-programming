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

    ulli t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;

        lli a = k % mod;
        lli b = (a * a) % mod;
        lli n1 = n % mod;

        if (n1 % b == 0)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }

    return 0;
}