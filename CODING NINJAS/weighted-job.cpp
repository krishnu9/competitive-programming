#include <bits/stdc++.h>
using namespace std;

struct job
{
    int start, finish, profit;
};

bool compare(job a, job b)
{
    return a.finish < b.finish;
}

int findMprofit(job arr[], int n)
{
    sort(arr, arr + n, compare);
    int *dp = new int[n];
    dp[0] = arr[0].profit;

    for (int i = 1; i < n; i++)
    {

        int including = arr[i].profit;
        int lNConflict = -1;

        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j].finish <= arr[i].start)
            {
                lNConflict = j;
                break;
            }
        }
        if (lNConflict != -1)
        {
            including += dp[lNConflict];
        }
        dp[i] = max(including, dp[i - 1]);
    }
    int ans = dp[n - 1];
    delete[] dp;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    job arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].start;
        cin >> arr[i].finish;
        cin >> arr[i].profit;
    }
    cout << findMprofit(arr, n);
}