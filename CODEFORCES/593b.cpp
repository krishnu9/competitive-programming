#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

const int N = 1e5 + 1;
const lli inf = LLONG_MAX;

lli modExp(lli num, lli k) {
  lli res = 1;
  for (; k; k >>= 1, num = num * num % mod) {
    if (k & 1) res = res * num % mod;
  }
  return res;
}

lli n, m;
int main() {
  cin >> n >> m;
  lli tmp = modExp(2, m) - 1;
  cout << modExp(tmp, n);
  return 0;
}
