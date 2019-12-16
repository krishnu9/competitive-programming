#include <bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int ans = 0;
    int l = 1;
    int h = arr[n - 1];
    while (l <= h)
    {
        int mid = (l + h) / 2;
        int temp = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            temp += arr[i] / mid;
            if (temp >= k)
            {
                ans = mid;
                break;
            }
        }
        if (l == h)
        {
            return ans;
        }
        if (temp >= k)
        {
            l = mid + 1;
        }
        else
        {
            h = mid;
        }
    }
    return ans;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = solve(arr, n, k);
        cout << count << endl;
    }

    return 0;
}