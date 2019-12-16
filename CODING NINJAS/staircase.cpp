#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int *A = new int[71];

    A[0] = 1, A[1] = 1, A[2] = 2;

    for (int i = 3; i < 71; i++)
    {
        A[i] = A[i - 1] + A[i - 2] + A[i - 3];
    }

    int n;
    cin >> n;

    cout << A[n];

    return 0;
}