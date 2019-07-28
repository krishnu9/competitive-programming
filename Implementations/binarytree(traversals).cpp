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

void printPostorder(Node* node){
	if(node==NULL)
	return;

	printPostorder(node->left);
	printPostorder(node->right);
	cout<<node->data<<" ";
}

void printInorder(Node* node){
	if(node==NULL)
		return;
printInorder(node->left);
cout<<node->data<<" ";
printInorder(node->right);

	}

	void printPreorder(Node* node){
		if(node==NULL)
		return;
		cout<<node->data<<" ";
		printPreorder(node->left);
		printPreorder(node->right);
	}
int main() {
Node *root = new Node(1);
 root->left = new Node(2);
 root->right = new Node(3);
 root->left->left = new Node(4);
 root->left->right = new Node(5);
 root->right->left = new Node(6);
cout<<"\nPreorder : ";
printPreorder(root);
cout<<"\nPostorder : ";
printPostorder(root);
cout<<"\nInorder : ";
printInorder(root);

//cin.get();
	return 0;
}
