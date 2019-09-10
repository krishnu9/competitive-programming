#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

int main() {
  ios_base::sync_with_stdio(0);

  vector<int> fib = {0, 1, 1};
  for (int i = 0; i < 61; i++) {
    fib.push_back((fib[i - 1] + fib[i - 2]) % 10);
  }

  ulli n = 2;
  map<ulli, int> de;

  while (log10(n) <= 18) {
    int power2 = floor(log2(n));
    ulli lowest2 = int(pow(2, power2));
    int last_digit = fib[lowest2 % 60 - 1];
    de.insert(pair<ulli, int>(n, last_digit));
    n = n * 2;
  }

  int t;
  cin >> t;

  ulli num;

  while (t--) {
    cin >> num;
    int power2 = floor(log2(num));
    ulli lowest2 = int(pow(2, power2));
    cout << de[lowest2] << endl;
  }

  return 0;
}