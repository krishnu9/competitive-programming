#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

// int ans;
// void op1(int* a) {
//   a[0] -= 1;
//   a[1] -= 2;
//   ans += 3;
//   return;
// }

// void op2(int* a) {
//   a[1] -= 1;
//   a[2] -= 2;
//   ans += 3;
//   return;
// }

int main() {
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  int ans, a, b, c;
  while (t--) {
    ans = 0;
    cin >> a >> b >> c;
    while (b >= 1 && c >= 2) {
      ans += 3;
      b--;
      c--;
      c--;
    }
    while (a >= 1 && b >= 2) {
      ans += 3;
      a--;
      b--;
      b--;
    }
    cout << ans << '\n';
  }

  return 0;
}