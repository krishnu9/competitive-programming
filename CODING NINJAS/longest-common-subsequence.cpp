#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

int lcs(char *s1, char *s2)
{
    if (s1[0] == '\0' || s2[0] == '\0')
        return 0;
    if (s1[0] == s2[0])
        return 1 + lcs(s1 + 1, s2 + 1);
    else
    {
        int ans1 = lcs(s1, s2 + 1);
        int ans2 = lcs(s1 + 1, s2);
        return max(ans1, ans2);
    }
}

int lcs_solve(char *s1, char *s2, int m, int n, int **dp)
{
    if (m == 0 || n == 0)
        return 0;
    if (dp[m][n] > -1)
        return dp[m][n];
    int ans;

    if (s1[0] == s2[0])
        ans = 1 + lcs_solve(s1 + 1, s2 + 1, m - 1, n - 1, dp);
    else
    {
        int ans1 = lcs_solve(s1, s2 + 1, m, n - 1, dp);
        int ans2 = lcs_solve(s1 + 1, s2, m - 1, n, dp);
        ans = max(ans1, ans2);
    }
    dp[m][n] = ans;
    return dp[m][n];
}

int lcs2(char *s1, char *s2)
{
    int m = strlen(s1);
    int n = strlen(s2);
    int **dp = new int *[m + 1];

    for (int i = 0; i <= m; i++)
    {
        dp[i] = new int[n + 1];
        for (int j = 0; j <= n; i++)
            dp[i][j] = -1;
    }
    int ans = lcs_solve(s1, s2, m, n, dp);
    for (int i = 0; i <= m; i++)
    {
        delete[] dp[i];
    }
    delete[] dp;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    char s1[100];
    char s2[100];
    cin >> s1 >> s2;

    int ans = lcs2(s1, s2);
    cout << ans << endl;
    int ans2 = lcs(s1, s2);
    cout << ans2 << endl;

    return 0;
}