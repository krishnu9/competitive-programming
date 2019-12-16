#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int *a = new int[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n, greater<int>());

    for (int i = 0; i < n - 2; i++)
    {
        if (a[i + 2] + a[i + 1] <= a[i])
            continue;
        cout << a[i + 2] << ' ' << a[i + 1] << ' ' << a[i] << '\n';
        return 0;
    }
    cout << -1 << "\n";
}