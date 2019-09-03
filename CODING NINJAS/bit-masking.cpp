#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int sum, count = 0;
    int k = 6;

    int *a = new int[n]{1, 2, 3, 4, 5};

    for (int mask = 0; mask < (1 << n); mask++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (mask & (1 << j) != 0)
            {
                sum += a[j];
            }
        }
        if (sum == k)
            count++;
    }

    cout << count;

    return 0;
}