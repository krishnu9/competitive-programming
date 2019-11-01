#include <bits/stdc++.h>
using namespace std;

void buildTree(int* arr, int* tree, int start, int end, int treeNode) {
  // Base Case
  if (start == end) {
    tree[treeNode] = arr[start];
    return;
  }
  int mid = (start + end) / 2;

  buildTree(arr, tree, start, mid, 2 * treeNode);
  buildTree(arr, tree, mid + 1, end, 2 * treeNode + 1);

  tree[treeNode] = tree[2 * treeNode] + tree[2 * treeNode + 1];
}

void updateTree(int* arr, int* tree, int start, int end, int treeNode, int idx,
                int value) {
  // Base
  if (start == end) {
    arr[idx] = value;
    tree[treeNode] = value;
    return;
  }
  int mid = (start + end) / 2;
  if (idx > mid) {
    updateTree(arr, tree, mid + 1, end, 2 * treeNode + 1, idx, value);
  } else {
    updateTree(arr, tree, start, mid, 2 * treeNode, idx, value);
  }
  tree[treeNode] = tree[2 * treeNode] + tree[2 * treeNode + 1];
}

int query(int* tree, int start, int end, int treeNode, int left, int right) {
  // Comletely outside range
  if (start > right || end < left) {
    return 0;
  }
  // Completely inside range
  if (start >= left && end <= right) {
    return tree[treeNode];
  }
  // Partially
  int mid = (start + end) / 2;
  int ans1 = query(tree, start, mid, 2 * treeNode, left, right);
  int ans2 = query(tree, mid + 1, end, 2 * treeNode + 1, left, right);
  return ans1 + ans2;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  int* tree = new int[2 * n];
  buildTree(arr, tree, 0, n - 1, 1);
  for (int i = 1; i < 2 * n; i++) cout << tree[i] << ' ';
  cout << endl;
  updateTree(arr, tree, 0, n - 1, 1, 2, 10);
  for (int i = 1; i < 2 * n; i++) cout << tree[i] << ' ';
  cout << endl;

  int ans = query(tree, 0, n - 1, 1, 2, 4);
  cout << "Sum between interval is: " << ans << endl;
  return 0;
}