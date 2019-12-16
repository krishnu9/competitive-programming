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
        ulli p1, p2, p3, sum = 0;

        cin >> p1 >> p2 >> p3;

        sum = p1 + p2 + p3;
        cout << sum / 2 << endl;
    }

    return 0;
}