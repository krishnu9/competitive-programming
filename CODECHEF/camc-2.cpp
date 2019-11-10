#include <bits/stdc++.h>
using namespace std;
struct node {
  long x;
  long index;
};

bool compare(node a, node b) {
  if (a.x != b.x) {
    return a.x < b.x;
  } else {
    return a.index < b.index;
  }
}
long cal(node arr[], int n, int m) {
  // Sort array in non-decreasing order
  sort(arr, arr + n, compare);
  // Initialize difference as infinite
  long diff = INT_MAX;

  // Find the min diff by comparing adjacent
  // pairs in sorted array
  for (int i = 0; i <= (n - m); i++) {
    if ((arr[i + m - 1].index - arr[i].index) % m != 0) {
      long curSeqDiff = arr[i + m - 1].x - arr[i].x;
      if (curSeqDiff < diff) {
        diff = curSeqDiff;
      }
    }
  }

  // Return min diff
  return diff;
}

int main() {
  int t;
  cin >> t;
  int n, m;
  while (t--) {
    cin >> n >> m;
    long a[n + 1];
    node nd[n + 1];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      nd[i].x = a[i];
      nd[i].index = i;
    }
    cout << cal(nd, n, m) << endl;
  }
  return 0;
}
