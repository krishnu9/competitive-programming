#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int

void buildTree(int* arr, int* tree, int start, int end, int treeNode) {
  if (start == end) {
    tree[treeNode] = arr[start];
    return;
  }
  int mid = (start + end) / 2;
  buildTree(arr, tree, start, mid, 2 * treeNode);
  buildTree(arr, tree, mid + 1, end, 2 * treeNode + 1);

  // Important !
  tree[treeNode] = min(tree[2 * treeNode], tree[2 * treeNode + 1]);
}
void updateTree(int* arr, int* tree, int start, int end, int treeNode,
                int index, int value) {
  if (start == end) {
    arr[index] = value;
    tree[treeNode] = value;
    return;
  }
  int mid = (start + end) / 2;
  if (index > mid) {
    updateTree(arr, tree, mid + 1, end, 2 * treeNode + 1, index, value);
  } else {
    updateTree(arr, tree, start, mid, 2 * treeNode, index, value);
  }
  tree[treeNode] = min(tree[2 * treeNode], tree[2 * treeNode + 1]);
}
int query(int* arr, int* tree, int start, int end, int treeNode, int left,
          int right) {
  // Comletely outside range
  if (start > right || end < left) {
    return INT_MAX;
  }
  // Completely inside range
  if (start >= left && end <= right) {
    return tree[treeNode];
  }
  // Partially
  int mid = (start + end) / 2;
  int ans1 = query(arr, tree, start, mid, 2 * treeNode, left, right);
  int ans2 = query(arr, tree, mid + 1, end, 2 * treeNode + 1, left, right);
  return min(ans1, ans2);
}
void printTree(int* tree, int n) {
  for (int i = 1; i <= 2 * n; i++) {
    cout << tree[i] << ' ';
  }
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(0);

  int n, q;
  cin >> n >> q;

  int* arr = new int[n];
  int* tree = new int[4 * n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  buildTree(arr, tree, 0, n - 1, 1);
  // printTree(tree,n)

  for (int i = 0; i < q; i++) {
    char c;
    int l, r;
    cin >> c >> l >> r;
    if (c == 'q') {
      cout << query(arr, tree, 0, n - 1, 1, l - 1, r - 1) << endl;
    } else if (c == 'u') {
      updateTree(arr, tree, 0, n - 1, 1, l - 1, r);
    }
  }

  return 0;
}