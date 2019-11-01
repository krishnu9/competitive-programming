// Templates
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  return 0;
}

// Unique elements in an iterable
string s;
sort(s.begin(), s.end());
s.resize(unique(s.begin(), s.end()) - s.begin());

// Operations with mod % 10^9+7
int add(int x, int y) { return (1ll * x + 1ll * y) % mod; }
int del(int x, int y) { return ((1ll * x - 1ll * y) % mod + mod) % mod; }
int mul(int x, int y) { return (1ll * x * 1ll * y) % mod; }
