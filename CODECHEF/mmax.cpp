#include <bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ulli k;
        cin >> k;

        lli rem = k % n;
        lli ans;

        if (n % 2 == 0)
        {
            if (rem == n / 2)
                ans = n - 1;
            else if (rem < n / 2)
                ans = rem * 2;
            else if (rem > n / 2)
                ans = (n - rem) * 2;
        }

        if (n % 2 != 0)
        {
            if (rem == n / 2 || rem == n / 2 + 1)
                ans = n - 1;
            if (rem < n / 2)
                ans = rem * 2;
            if (rem > n / 2 + 1)
                ans = (n - rem) * 2;
        }
        cout << ans << endl;
    }

    return 0;
}