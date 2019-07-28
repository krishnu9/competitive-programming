#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

int countWaysToMakeChange(int denominations[], int numDenominations, int value)
{

    /*  Don't write main().
   *  Don't read input, it is passed as function argument.
   *  Return output and don't print it.
   *  Taking input and printing output is handled automatically.
   */
    int n = numDenominations;
    for (int i = 0; i < n; i++)
    {
        }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, v;
    cin >> n;
    int D[n];
    for (int i = 0; i < n; i++)
    {
        cin >> D[i];
    }
    cin >> v;

    int W = countWaysToMakeChange(D, n, v);
    cout << W;

    return 0;
}