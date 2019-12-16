#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

int dp[200][200][200];

int maxBlessing(string s1, string s2, int m, int n, int k)
{
    int ans1 = -1;
    if (k == 0)
        return 0;
    if (m == -1 || n == -1)
        return -1;

    if (dp[m][n][k] != -2)
    {
        return dp[m][n][k];
    }

    if (s1[m] == s2[n])
    {
        ans1 = maxBlessing(s1, s2, m - 1, n - 1, k - 1);
        ans1 = ans1 == -1 ? -1 : (ans1 + s1[m]);
    }

    int ans2 = -1;
    int ans3 = -1;
    ans2 = maxBlessing(s1, s2, m - 1, n, k);
    ans3 = maxBlessing(s1, s2, m, n - 1, k);

    dp[m][n][k] = max(ans1, max(ans2, ans3));
    return dp[m][n][k];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    string s1, s2;
    int k;
    while (t--)
    {

        for (int x = 0; x < 200; x++)
            for (int y = 0; y < 200; y++)
                for (int z = 0; z < 200; z++)
                    dp[x][y][z] = -2;

        cin >> s1 >> s2;
        cin >> k;
        int ans = maxBlessing(s1, s2, s1.size() - 1, s2.size() - 1, k);
        ans = (ans == -1 ? 0 : ans);
        cout << ans << endl;
    }
    return 0;
}