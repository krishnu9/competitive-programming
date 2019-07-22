#include <iostream>
#include <queue>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;

	Node(int data)
	{
		this->data = data;
		left = right = NULL;
	}
};

void levelOrder(Node *root)
{
	queue<Node *> Q;
	Q.push(root);
	while (!Q.empty())
	{
		Node *current = Q.front();
		if (current->left != NULL)
			Q.push(current->left);
		if (current->right != NULL)
			Q.push(current->right);
		Q.pop();
		cout << current->data << " ";
	}
}
int main()
{
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	levelOrder(root);
}
