#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

void add(int arr[], int N, int lo, int hi, int val)
{
    arr[lo] += val;
    if (hi != N - 1)
        arr[hi + 1] -= val;
}

void updateArray(int arr[], int N)
{
    //  convert array into prefix sum array
    for (int i = 1; i < N; i++)
        arr[i] += arr[i - 1];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n] = {};
        int ci;
        for (int i = 0; i < n; i++)
        {
            cin >> ci;
            add(arr, n, max(i - ci, 0), min(i + ci, n - 1), 1);
        }

        updateArray(arr, n);
        /*         for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl; */
        int h[n];
        for (int i = 0; i < n; i++)
            cin >> h[i];
        sort(arr, arr + n);
        sort(h, h + n);

        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if (h[i] != arr[i])
            {
                ans = false;
                break;
            }
        }

        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}