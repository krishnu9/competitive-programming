/* We solve the question using dynamic programming. Lets say we check for the string {1,2,3}. We create a array b[] 
such that b[i] denotes the decryption of the string from (0 to i). For example b[0] denotes the decryption of {1}
while b[1] denotes the decryption of {1,2}. We assign b[0] = 1 as it is very clear that the first element can be 
written in 1 way. Now for the rest of the string we assign b[i]= b[i-1] and we check with the previous element. 
If the previous and current element both can form a valid character, i.e, if x > 9 & x<27 we add b[i-2] to b[i]. 
This is done because if we know that we can directly from i-2th position to i-th as i-1 th and i-2 th both can 
form a character together. */

/* int main()
{
    char a[5010];
    int i, j;
    scanf("%s", a);
    while (a[0] != '0')
    {

        int n = strlen(a);
        long long int b[n];
        for (i = 0; i < n; i++)
            b[i] = 0;
        b[0] = 1;
        for (i = 1; i < n; i++)
        {

            j = (a[i - 1] - '0') * 10 + (a[i] - '0');
            if (a[i] - '0')
                b[i] = b[i - 1];
            if (j > 9 && j < 27)
            {
                if (i == 1)
                    b[i] = b[i] + 1;
                else
                    b[i] = b[i] + b[i - 2];
            }
        }
        printf("%lld\n", b[n - 1]);
        scanf("%s", a);
    }
    if (a[0] == '0')
        return 0;
} */
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

    lli dp[5001];
    string s;
    while (true)
    {
        cin >> s;
        if (s == "0")
            break;

        int n = s.size();
        for (int i = 0; i < 5001; i++)
        {
            dp[i] = 0;
        }
        dp[0] = 1;
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
            dp[i] = dp[i] % mod;
        }
        cout << dp[n - 1] << endl;
    }

    return 0;
}
