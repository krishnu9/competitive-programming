#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

int main() {
  ios_base::sync_with_stdio(0);

  // int inarray[1000005] = {0};
  int indexof[1000005];
  for (int i = 0; i < 1000005; i++) indexof[i] = -1;

  int t;
  int n;
  cin >> t;
  while (t--) {
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++) {
      cin >> A[i];
      // inarray[A[i]] = 1;
      indexof[A[i]] = i;
    }  // INPUT

    int starValue[n] = {0};

    for (int i = 0; i < n; i++) {
      for (int j = 1; j * j < A[i]; j++) {
        if (A[i] % j == 0 && indexof[j] > i) starValue[j]++;
      }
    }

    // THIS WORKS
    int max = 0;
    for (int i = 0; i < n; i++) {
      cout << starValue[i] << ' ';
      if (starValue[i] > max) max = starValue[i];
    }
    cout << '\n';
    cout << max << '\n';
  }

  return 0;
}