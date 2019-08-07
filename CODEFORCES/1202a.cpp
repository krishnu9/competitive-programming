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
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n1 = 0, n2 = 0;
        int target = pow(2, s1.size());
        for (int i = s1.size() - 1; i >= 0; i--)
        {
            n1 += pow(2, int(s1[i] - '0'));
        }
        for (int i = s2.size() - 1; i >= 0; i--)
        {
            n2 += pow(2, int(s2[i] - '0'));
        }
        int diff = target - n1;
        int k2 = diff / n2;
        int k = ceil(log2(k2));
        cout << k << endl;
    }
    return 0;
}