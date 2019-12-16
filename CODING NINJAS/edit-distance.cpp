#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

int editDistance(string s1, string s2)
{
    int m = s1.size(), n = s2.size();

    int dp[m + 1][n + 1];

    for (int i = 0; i <= n; i++)
    {
        dp[0][i] = i;
    }
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = i;
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (s1[m - i] == s2[n - j])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j]));
        }
    }
    int ans = dp[m][n];
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1, s2;

    cin >> s1 >> s2;

    int ans = editDistance(s1, s2);

    cout << ans;

    return 0;
}