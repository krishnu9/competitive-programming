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

    string s1, s2, s;
    cin >> s1 >> s2;

    s = s1 + s2; //this works for strings!

    cin >> s2;
    sort(s.begin(), s.end());
    sort(s2.begin(), s2.end());

    if (s == s2) //this works too !
        cout << "YES";
    else
    {
        cout << "NO";
    }

    return 0;
}