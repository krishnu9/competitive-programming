#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

int lis(int *input, int n)
{
    int *output = new int[n];
    output[0] = 1;
    for (int i = 0; i < n; i++)
    {
        output[i] = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (input[j] > input[i])
                continue;
            int possibleAns = output[j] + 1;
            if (output[i] < possibleAns)
                output[i] = possibleAns;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans < output[i])
            ans = output[i];
    }
    delete[] output;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int *input = new int[n];
    for (int i = 0; i < n; i++)
        cin >> input[i];
    int ans = lis(input, n);
    cout << ans;
    delete[] input;
    return 0;
}