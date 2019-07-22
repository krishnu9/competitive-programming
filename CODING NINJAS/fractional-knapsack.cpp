#include <bits/stdc++.h>
typedef long long int lli;

using namespace std;

struct worker
{
    int t, x, y;
};

bool comp(worker a, worker b)
{
    if (a.t == b.t)
    {
        if (a.y == b.y)
        {
            return a.x - b.x;
        }
        return b.y - a.y;
    }
    return a.t - b.t;
}

int main()
{
    int n;
    cin >> n;
    lli area;
    cin >> area;
    worker A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].t;
        cin >> A[i].x;
        cin >> A[i].y;
    }
    sort(A, A + n, comp);

    int mincost = 0;
    lli currarea = 0;
    lli bestspeed = 0;
    lli lasttime = worke
}
