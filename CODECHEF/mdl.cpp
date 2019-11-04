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
    int n, ai;
    int temp[3];

    while (t--)
    {
        cin >>n;
    vector<int> a;

        int maxA = INT_MIN, minA = INT_MAX;
        int maxi, mini;

        for(int i=0;i<n;i++) {
            cin >> ai;
            a.push_back(ai);
            if(ai > maxA) {
                maxA = ai;
                maxi = i;
            }
            if(ai < minA) {
                minA = ai;
                mini = i;
            }
        }

        if(mini < maxi) {
            cout << minA << ' ' << maxA << endl;
        }
        else
        cout << maxA << ' ' << minA << endl;
    }
    

    return 0;
}