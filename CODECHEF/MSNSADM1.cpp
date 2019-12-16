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

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], b[n], sc[n], score;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            score = 20 * a[i] - 10 * b[i];
            sc[i] = max(0, score);
        }

        auto it = max_element(sc, sc + n);
        cout << *it << endl;
    }

    return 0;
}