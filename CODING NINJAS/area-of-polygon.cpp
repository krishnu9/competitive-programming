#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ulli unsigned long long int
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define FOR(i, n, m) for (int i = (int)n; i <= (int)m; ++i)
#define FOD(i, n, m) for (int i = (int)n; i >= (int)m; --i)
#define mod 1000000007
#define inf 100000000000000
#define MM(a, x) memset(a, x, sizeof(a))
#define ALL(x) (x).begin(), (x).end()
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz(x) x.size()
#define bs binary_search
#define NL cout << endl

struct Point {
  double x, y;
};

class Polygon {
public:
  Point *points;
  Polygon(int npoints) { points = new Point[npoints]; }
};

double area(Polygon p, int n) {
  double farea = 0;
  for (int i = 1; i < n - 1; i++) {
    double x1 = p.points[i].x - p.points[0].x;
    double y1 = p.points[i].y - p.points[0].y;
    double x2 = p.points[i + 1].x - p.points[0].x;
    double y2 = p.points[i + 1].y - p.points[0].y;
    double cross_prod = x1 * y2 - y1 * x2;
    farea += cross_prod;
  }
  return abs(farea);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int n;
  cin >> n;
  Polygon p(n);
  rep(i, n) {
    cin >> p.points[i].x;
    cin >> p.points[i].y;
  }
  double ar = area(p, n);
  cout << ar << endl;
  return 0;
}