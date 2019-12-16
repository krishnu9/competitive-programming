#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

int lbs(int *input, int n)
{
    int *lis = new int[n];
    int *lds = new int[n];

    lis[0] = 1;
    for (int i = 1; i < n; i++)
    {
        lis[1] = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (input[j] > input[i])
                continue;
            int possibleAns = lis[j] + 1;
            if (lis[i] < possibleAns)
                lis[i] = possibleAns;
        }
    }

    lds[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        lds[i] = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (input[j] > input[i])
                continue;
            int possibleAns = lds[j] + 1;
            if (lds[i] < possibleAns)
                lds[i] = possibleAns;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans < lis[i] + lds[i] - 1)
            ans = lis[i] + lds[i] - 1;
    }
    delete[] lis;
    delete[] lds;
    return ans;
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);
    cout.tie(NULL);
    int n;
    cin >> n;
    int *input = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    int ans = lbs(input, n);
    cout << ans;
    delete[] input;
    return 0;
}