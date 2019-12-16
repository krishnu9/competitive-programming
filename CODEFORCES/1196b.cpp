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

    int q;
    cin >> q;
    while (q--)
    {
        lli n, k;
        cin >> n >> k;
        lli a[n];
        string ans = "NO";
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int r[k], j = 0; //array to store ri, right border of jth segment
        lli sum = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum & 1)
            {
                r[j++] = i;
                sum = 0;
                cnt++;
            }
        }
        if (cnt == k)
        {
            ans = "YES";
            cout << ans << endl;
            for (auto x : r)
            {
                cout << x + 1 << ' ';
            }
            cout << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}