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

    ll t;
    cin >> t;

    ll count[128];
    MM(count, 0);

    vector<ll> s = {0, 0, 1};
    count[0] = 1;

    FOR(i, 3, 128)
    {
        ll curr = s[i - 1];
        if (count[curr] == 0)
        {
            count[curr]++;
            s.push_back(0);
        }
        else
        {
            ll j = i - 2;
            while (j > 0 && s[j] != s[i - 1])
                j--;
            ll del = i - j - 1;
            s.push_back(del);
        }
    }

    //rep(i, s.size()) cout << s[i];

    // for (int i = 0; i < s.size(); i++)
    // {
    //     int temp = s[i] - '0';
    //     count[temp]++;
    //     ans[i] = count[temp];
    //     cout << ans[i] << ' ';
    // }
    // NL;

    while (t--)
    {
        ll n;
        cin >> n;
        ll c = s[n - 1];
        ll cnt = 0;
        rep(i, n)
        {
            if (s[i] == c)
                cnt++;
        }
        cout << cnt;
        NL;
    }

    return 0;
}