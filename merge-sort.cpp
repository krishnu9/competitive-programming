#include <bits/stdc++.h>
using namespace std;

long long merge(int A[], int start, int mid, int end)
{

    int i = start, j = mid, k = 0;

    int temp[end - start + 1];
    long long sum = 0;
    while (i < mid && j <= end)
    {
        if (A[i] <= A[j])
        {
            sum += A[i] * (end - j + 1);
            temp[k++] = A[i++];
        }
        else
        {
            temp[k++] = A[j++];
        }
    }
    while (i < mid)
    {
        temp[k++] = A[i++];
    }
    while (j <= end)
    {
        temp[k++] = A[j++];
    }

    for (int i = start, k = 0; i <= end; i++, k++)
    {
        A[i] = temp[k];
    }
    return sum;
}

long long merge_sort(int A[], int start, int end)
{

    long long sum = 0;
    if (end > start)
    {
        int mid = (start + end) / 2;

        long long sumstart = merge_sort(A, start, mid);
        long long sumend = merge_sort(A, mid + 1, end);
        long long mysum = merge(A, start, mid + 1, end);

        return mysum + sumstart + sumend;
    }
    return sum;
}
long long solve(int A[], int n)
{
    long long ans = merge_sort(A, 0, n - 1);
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        long long ans = merge_sort(A, 0, n - 1);
        cout << ans << endl;
    }
}