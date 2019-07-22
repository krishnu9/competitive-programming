
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void func(float &x)
{
  x = x * x;
}

int main()
{

  float A[] = {1, 3, 4, 5, 7, 8, 9, 4, 2, 1};
  int size = 10;

  for_each(A, A + size, func);

  for (float x : A)
  {
    cout << x << ' ';
  }

  return 0;
}
