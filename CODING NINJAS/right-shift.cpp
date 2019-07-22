#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 15, i = 2;
    int m = 1 << (i);
    m = m - 1;
    int k = m;
    m = n & k;
    cout << m << endl;
}
