#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ulli unsigned long long int
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define FOR(i, n, m) for (int i = (int)n; i <= (int)m; i++)
#define FOD(i, n, m) for (int i = (int)n; i >= (int)m; i--)
#define mod 1000000007
#define inf 100000000000000
#define MM(a, x) memset(a, x, sizeof(a))
#define ALL(x) (x).begin(), (x).end()
#define UN(v) sort(ALL(v)), v.resize(unique(ALL(v)) - v.begin())
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz() size()
#define bs binary_search
#define NL cout << endl

int main()
{
    ios_base::sync_with_stdio(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, ans = 0;
        cin >> n;
        string s;
        rep(i, n)
        {
            ll num = 0;
            cin >> s;
            rep(i, 10)
            {
                if (s[i] == '1')
                {
                    num += (1 << i);
                }
            }
            ans = ans ^ num;
        }
        cout << __builtin_popcount(ans) << endl;
    }

    return 0;
}