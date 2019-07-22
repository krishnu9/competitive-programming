#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] < s2[i])
        {
            cout << -1;
            break;
        }
        if (s1[i] > s2[i])
        {
            cout << 1;
            break;
        }
        if (s1[i + 1] == '\0')
        {
            cout << 0;
        }
    }
    return 0;
}
