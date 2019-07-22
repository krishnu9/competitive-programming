#include <bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;

using namespace std;

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
        lli A[n];
        ulli sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            sum += A[i];
        }
        double m = sum / n;
        if (sum % n == 0)
        {
            int i;
            for (i = 0; i < n; i++)
            {
                if ((double)A[i] == m)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
            if (i == n)
                cout << "Impossible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }
}
