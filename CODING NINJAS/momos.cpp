#include <bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prices[n];
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    A[0] = prices[0];

    for (int i = 1; i < n; i++)
    {
        A[i] = A[i - 1] + prices[i];
    }

    int Q, q;
    cin >> Q;
    int val, ind;
    int left, right, mid;
    while (Q--)
    {
        cin >> q;
        left = 0, right = n - 1;

        while (left <= right)
        {
            mid = left + (right - left) / 2;
            if (q > A[mid] && q < A[mid + 1])
            {
                val = A[mid];
                ind = mid;
                break;
            }

            else if (q > A[mid + 1])
            {
                left = mid + 1;
            }
            else if (q < A[mid])
            {
                right = mid - 1;
            }
        }
        cout << ind + 1 << ' ' << q - val << endl;
    }

    return 0;
}
