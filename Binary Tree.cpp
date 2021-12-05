#include <iostream>
using namespace std;

struct bnode
{
    int data;
    bnode* left, *right;
};

bnode* insert(int val)
{
    bnode* newNode = (bnode*)malloc(sizeof(bnode));
    newNode->data = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}
void preorderTraversal(bnode* node) 
{
  if (node == NULL)
    return;

  cout << node->data << "\t";
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}

void inorderTraversal(bnode* node)
 {
  if (node == NULL)
    return;

  inorderTraversal(node->left);
  cout << node->data << "\t";
  inorderTraversal(node->right);
}

void postorderTraversal(bnode* node)
 {
  if (node == NULL)
    return;

  postorderTraversal(node->left);
  postorderTraversal(node->right);
  cout << node->data << "\t";
}

int main() {
	bnode *root = (bnode*)malloc(sizeof(bnode));
	

	root = insert(12);
	root->right = insert(24);
	root->left = insert(36);
	root->left->left = insert(6);
	root->left->right = insert(48);
	
	cout << "\nPreorder Traversal = " << endl;
	preorderTraversal(root);
	
  cout << "\nInorder Traversal =: " << endl;
	inorderTraversal(root);

  cout << "\nPostorder Traversal = " << endl;
	postorderTraversal(root);
  return 0;
}