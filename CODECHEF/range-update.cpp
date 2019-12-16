#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

void update(vector<int> &D, int l, int r, int x)
{
    D[l] += x;
    D[r + 1] -= x;
}

void printArray(vector<int> &A, vector<int> &D)
{
    for (int i = 0; i < A.size(); i++)
    {
        if (i == 0)
            A[i] = D[i];
        else
            A[i] = D[i] + A[i - 1];
        cout << A[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12};

    int n = A.size();
    vector<int> D(n + 1);

    D[0] = A[0];
    D[n] = 0;

    for (int i = 1; i < n; i++)
    {
        D[i] = A[i] - A[i - 1];
    }
    printArray(A, D);

    update(D, 3, 5, 10);
    printArray(A, D);

    update(D, 1, 6, 1);
    printArray(A, D);

    return 0;
}