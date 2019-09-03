#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

struct gifts {
  int a;
  int c;
};

bool isfair(gifts g1, gifts g2) {
  bool fair;
  if (g1.a < g2.a) fair = (g1.c < g2.c);
  if (g1.a > g2.a) fair = (g1.c > g2.c);
  if (g1.a == g2.a) fair = (g1.c == g2.c);
  return fair;
}

int main() {
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  bool fair;
  while (t--) {
    fair = true;
    gifts g[3];
    cin >> g[0].a;
    cin >> g[1].a;
    cin >> g[2].a;
    cin >> g[0].c;
    cin >> g[1].c;
    cin >> g[2].c;
    if (isfair(g[0], g[1]) && isfair(g[1], g[2]) && isfair(g[0], g[2]))
      cout << "FAIR\n";
    else
      cout << "NOT FAIR\n";
  }

  return 0;
}