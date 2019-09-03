#include <bits/stdc++.h>
using namespace std;

void insert(int* arr, node* head) {}

struct node {
  node* left;
  node* right;
};

void insert(int n, node* head) {
  node* temp = head;
  for (int i = 31; i >= 0; i--) {
    int b = (n >> i) & 1;
    if (b == 0) {
      if (!temp->left) {
        temp->left = new node;
      }
      temp = temp->left;
    } else {
      if (!temp->right) {
        temp->right = new node;
      }
      temp = temp->right;
    }
  }
}

void findMaxXorPair(node* head, int* arr, int n) {}

int main() {
  int arr[6] = {1, 2, 3, 4, 5, 6};

  node* head = new node;

  for (int i = 0; i < 6; i++) {
    insert(arr[i], head);
  }

  cout << findMaxXorPair(head, arr, 6) << endl;

  return 0;
}