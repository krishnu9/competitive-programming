#include <bits/stdc++.h>
using namespace std;

void makeSieve(int n) {
  bool isPrime[n + 1];
  for (int i = 0; i < n; i++) {
    isPrime[i] = true;
  }

  isPrime[0] = false;
  isPrime[1] = false;

  for (int i = 2; i * i <= n; i++) {
    for () }
}

int main() {
  // We need to print all prime numbers from 1 to N.

  int n;
  cin >> n;

  makeSieve(n);

  return 0;
}