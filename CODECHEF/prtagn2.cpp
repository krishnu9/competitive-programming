#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int ones[200000];
    ones[0] = 0, ones[1] = 1;
    for (int i = 0; i < 200000; i++)
    {
        ones[i] = ones[i / 2];
        if (i & 1)
            ones[i]++;
    }

    int ispresent[200000];

    int t;
    cin >> t;
    while (t--)
    {
        memset(ispresent, 0, sizeof ispresent);

        int x;

        int q;
        cin >> q;
        unordered_set<int> s;
        int E = 0, O = 0;
        while (q--)
        {
            cin >> x;
            if (!ispresent[x])
            {
                unordered_set<int> s_temp;
                for (auto it : s)
                {
                    int temp = it ^ x;
                    s_temp.insert(temp);
                    ispresent[temp] = 1;
                    ones[temp] & 1 ? O++ : E++;
                }
                s.insert(x);
                ispresent[x] = 1;
                ones[x] & 1 ? O++ : E++;
                for (auto it : s_temp)
                {
                    s.insert(it);
                }
            }
            cout << E << ' ' << O << endl;
        }
    }
    return 0;
}
