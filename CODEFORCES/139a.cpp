#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define FOR(i, n, m) for (int i = (int)n; i <= (int)m; i++)
#define FOD(i, n, m) for (int i = (int)n; i >= (int)m; i--)
typedef long long ll;
#define mod 1000000007
#define inf 100000000000000
#define MM(a, x) memset(a, x, sizeof(a))
#define ALL(x) (x).begin(), (x).end()
#define UN(v) sort(ALL(v)), v.resize(unique(ALL(v)) - v.begin())
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz() size()
#define bs binary_search
#define NL cout << endl

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  int sum = 0;
  int a[n];
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
  }

  int del = n % sum;
  int i = 0;
  while (del > 0) {
    del -= a[i++];
  }
  cout << i;

  return 0;
}