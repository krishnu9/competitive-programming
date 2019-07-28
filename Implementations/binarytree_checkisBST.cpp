#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *left, *right;

	Node(int data){
		this->data = data;
		left = right = NULL;
	}
};

//wrong approach
int isBST(Node* node)
{
if (node == NULL)
	return 1;

/* false if left is > than node */
if (node->left != NULL && node->left->data > node->data)
	return 0;

/* false if right is < than node */
if (node->right != NULL && node->right->data < node->data)
	return 0;

/* false if, recursively, the left or right is not a BST */
if (!isBST(node->left) || !isBST(node->right))
	return 0;

/* passing all that, it's a BST */
return 1;
}

//correct

int main() {
Node *root = new Node(1);
 root->left = new Node(2);
 root->right = new Node(3);
 root->left->left = new Node(4);
 root->left->right = new Node(5);
 root->right->left = new Node(6);
cout<<isBST(root);
//cin.get();
	return 0;
}
