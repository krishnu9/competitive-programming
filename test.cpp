
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void func(float &x)
{
  x = x * x;
}

int main()
{

  vector<pair<int, int>> A(25, {1, 3});
  for (auto x : A)
  {
    cout << x.first << ' ' << x.second << endl;
  }

  return 0;
}
