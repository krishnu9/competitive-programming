#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

int main() {
  ios_base::sync_with_stdio(0);

  int n;
  cin >> n;
  int x;
  int temp = 1;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x % 2 == 0) {
      cout << x / 2;
    } else {
      cout << (x + temp) / 2;
      temp = temp * -1;
    }
    cout << '\n';
  }

  return 0;
}