#include <bits/stdc++.h>
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

bool isPossible(int persons, int A[], int N)
{
    int pers = 0;
    for (int i = 0; i < N; i++)
    {
        pers += A[i] / persons;
    }
    if (pers < persons)
        return false;
    else
        return true;
}

int search(int start, int end, int A[], int N)
{
    if (end >= start)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(mid, A, N))
            return search(mid + 1, end, A, N);
        if (!isPossible(mid, A, N))
            return search(start, mid - 1, A, N);
    }
    return start;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        sort(A, A + N);
        cout << search(0, K, A, N) << endl;
    }

    return 0;
}