#include <bits/stdc++.h>
typedef long long int lli;

using namespace std;

struct act
{
    int start;
    int end;
};

bool comp(act a, act b)
{
    return a.end < b.end;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    act activities[n];
    for (int i = 0; i < n; i++)
    {
        cin >> activities[i].start;
        cin >> activities[i].end;
    }

    sort(activities, activities + n, comp);

    //cout << endl;

    /* for (auto x : activities)
    {
        cout << x.start << ' ' << x.end << endl;
    } */

    int count = 1, i = 0;

    for (int j = 1; j < n; j++)
    {
        if (activities[j].start >= activities[i].end)
        {
            count++;
            i = j;
        }
    }

    cout << count;

    return 0;
}