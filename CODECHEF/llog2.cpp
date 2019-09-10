#include <bits/stdc++.h>
using namespace std;

int llog2(int n) {
  int ans = 1;
  int i;
  for (i = 0; ans <= n; i++) {
    ans *= 2;
  }
  return i - 1;
}

int main() {
  int n;
  cin >> n;

  cout << llog2(n);

  return 0;
}