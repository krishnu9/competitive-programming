#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

int max_array(int *arr, int n, int *start, int *finish)
{
    int max_val = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_val)
        {
            max_val = arr[i];
            *start = i;
            *finish = i;
        }
    }
    return max_val;
}

int kadanes_algo(int arr[], int *start, int *finish, int n)
{
    bool allNeg = true;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            allNeg = false;
    }
    if (allNeg)
        return max_array(arr, n, start, finish);

    int current_max = 0, best_so_far = 0;
    int start_i = 0;
    for (int i = 0; i < n; i++)
    {
        current_max += arr[i];
        if (best_so_far < current_max)
        {
            best_so_far = current_max;
            *start = start_i;
            *finish = i;
        }
        if (current_max < 0)
        {
            current_max = 0;
            start_i = i + 1;
        }
    }
    return best_so_far;
}

int maxSumRectangle(int **mat, int n, int m)
{
    int max_sum = INT8_MIN, left, right, top, bottom;
    int temp[n], sum, start = 0, finish = 0;
    int i, j;

    for (i = 0; i < n; i++)
    {
        memset(temp, 0, sizeof(temp));

        for (j = i; j < m; j++)
        {
            for (int k = 0; k < n; k++)
                temp[k] += mat[k][j];

            sum = kadanes_algo(temp, &start, &finish, n);

            if (sum > max_sum)
            {
                max_sum = sum;
                left = i;
                right = j;
                top = start;
                bottom = finish;
            }
        }
    }
    return max_sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int **mat = new int *[n];
    for (int i = 0; i < n; i++)
        mat[i] = new int[m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << maxSumRectangle(mat, n, m) << endl;
    return 0;
}