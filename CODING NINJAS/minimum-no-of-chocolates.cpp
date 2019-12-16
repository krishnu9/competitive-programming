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
    int a[n], dp[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            dp[i] = 1 + dp[i - 1];
        }
        else
        {
            dp[i] = 1;
        }
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > a[i + 1] && dp[i] <= dp[i + 1])
        {
            dp[i] = 1 + dp[i + 1];
        }
    }
    int sum = 0;
    for (auto x : dp)
        sum += x;

    cout << sum;

    return 0;
}