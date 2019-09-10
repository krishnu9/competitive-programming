#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

int main() {
  ios_base::sync_with_stdio(0);

  int n, d, e;
  cin >> n >> d >> e;
  vector<int> dollarbills = {1, 2, 5, 10, 20, 50, 100};
  vector<int> eurobills = {5, 10, 20, 50, 100, 200};

  if (n % d == 0)
    cout << 0;
  else if (n % e == 0 && (n % e) % 5 == 0)
    cout << 0;
  else {
    if (e > d) {
      int i = 5;
      while (eurobills[i] * e > n) {
        i--;
      }
      if (i >= 0) n -= eurobills[i] * e;
      i = 0;
      while (dollarbills[i] * d < n) {
        i++;
      }
      if (i <= 6) n -= dollarbills[i - 1] * d;
    }
    if (d > e) {
      int i = 6;
      while (dollarbills[i] * d > n) {
        i--;
      }
      if (i <= 6) n -= dollarbills[i] * d;
      i = 0;
      while (eurobills[i] * e < n) {
        i++;
      }
      if (i >= 0) n -= eurobills[i - 1] * e;
    }

    cout << n << endl;
  }

  return 0;
}