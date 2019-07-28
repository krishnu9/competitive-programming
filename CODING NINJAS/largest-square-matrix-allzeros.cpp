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

    int n, m;
    cin >> n >> m;

    int i1[n][m], a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> i1[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        if (i1[i][0] == 0)
            a[i][0] = 1;
        else
            a[i][0] = 0;
    }
    for (int i = 0; i < m; i++)
    {
        if (i1[0][i] == 0)
            a[0][i] = 1;
        else
            a[0][i] = 0;
    }
    int maxsize = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                a[i][j] = min(a[i - 1][j - 1], min(a[i][j - 1], a[i - 1][j]));
                a[i][j]++;
                maxsize = max(a[i][j], maxsize);
            }
            else
                a[i][j] = 0;
        }
    }
    cout << maxsize << endl;
    return 0;
}