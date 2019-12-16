#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;

  string ans;
  ulli n;

  while (t--) {
    cin >> n;
    int x = 0, y = 0;
    while (n % 10 == 0) {
      n = n / 10;
      x++;
    }
    while (n % 2 == 0) {
      n = n / 2;
      y++;
    }
    if (n == 1 && y <= x)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}