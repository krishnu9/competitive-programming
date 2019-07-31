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

    int freq[1001], dp[1001]; //store freqs
    fill_n(freq, 1001, 0);

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    dp[0] = 0;
    dp[1] = freq[1];

    for (int i = 2; i <= 1000; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * freq[i]);
    }
    cout << dp[1000];
    // dp[i] = max(dp[i-2] + i*freq[i], dp[i - 1])
    // ans = dp[1000]

    return 0;
}