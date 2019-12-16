#include <bits/stdc++.h>
using namespace std;
#define opt ios_base::sync_with_stdio(0)
#define lli long long int

int main()
{
    opt;

    lli a, b, c, d;
    cin >> a >> b >> c >> d;

    lli pos[3];
    pos[0] = a;
    pos[1] = b;
    pos[2] = c;

    sort(pos, pos + 3);

    //cout<<pos[0]<<' '<<pos[1]<<' '<<pos[2]<<endl;

    lli d1 = pos[1] - pos[0], d2 = pos[2] - pos[1];
    lli ans = 0;

    if (d1 < d)
    {
        ans += d - abs(d1);
    }
    if (d2 < d)
    {
        ans += d - abs(d2);
    }

    cout << ans;

    return 0;
}
