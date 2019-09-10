#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

int main() {
  ios_base::sync_with_stdio(0);

  int t;
  int n, k;
  while (t--) {
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0;
    for (int i = 0; i < k; i++) {
      sum += a[i];
    }
  }

  return 0;
}