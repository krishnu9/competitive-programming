#include <bits/stdc++.h>
#define lli long long int
#define opt ios_base::sync_with_stdio(0)
using namespace std;

int main()
{
    opt;
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, y;
    cin >> n >> x >> y;

    char s[n];

    int z = 0;

    cin >> s;

    if (s[0] == '0')
        z = '1';

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0' && s[i - 1] == '1')
            z++;
    }

    int ans = z * (x < y ? x : y) + y;
    cout << ans << endl;

    return 0;
}