#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

bool in_one(char c)
{
    return (c == '1');
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;

        int ones = count_if(s.begin(), s.end(), in_one);
        if (ones & 1)
            cout << "WIN";
        else
            cout << "LOSE";
        cout << endl;
    }

    return 0;
}