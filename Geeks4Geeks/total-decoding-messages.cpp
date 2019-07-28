#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    //code
    int t, n;
    cin >> t;
    lli dp[5001];
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;
        for (int i = 0; i < 5000; i++)
        {
            dp[i] = 0;
        }
        dp[0] = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cout << 0 << endl;
                return 0;
            }
        }
        for (int i = 1; i < n; i++)
        {
            int j = (s[i - 1] - '0') * 10 + (s[i] - '0');
            if (s[i] - '0')
                dp[i] = dp[i - 1];
            if (j > 9 && j < 27)
            {
                if (i == 1)
                {
                    dp[i]++;
                }
                else
                {
                    dp[i] += dp[i - 2];
                }
            }
        }
        cout << dp[n - 1] << endl;
    }
    return 0;
}