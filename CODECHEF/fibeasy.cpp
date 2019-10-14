#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

int main() {
  ios_base::sync_with_stdio(0);

  int last_dig[65] = {0, 1, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0,
                      9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9,
                      2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2,
                      3, 0, 9, 2, 3, 0, 9, 2, 3, 0, 9, 2, 3, 0};

  ulli t;
  cin >> t;

  while (t--) {
    ulli n;
    cin >> n;
    int msb = 0;
    while (n != 0) {
      n = n / 2;
      msb++;
      // cout << msb;
    }
    cout << last_dig[msb - 1] << ' ';
  }
  return 0;
}