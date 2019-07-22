#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

string flag = "NO";

void f(char c)
{
    if (c == 'H' || c == 'Q' || c == '9')
        flag = "YES";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    for_each(s.begin(), s.end(), f);
    cout << flag;

    return 0;
}