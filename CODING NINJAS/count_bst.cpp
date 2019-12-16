#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

int countBST(int n)
{
    int dp[n + 1];
    fill_n(dp, n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i] = dp[i] + (dp[j - 1] * dp[i - j]);
        }
    }
    return dp[n];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin >> n;
    cout << countBST(n) << endl;

    return 0;
}