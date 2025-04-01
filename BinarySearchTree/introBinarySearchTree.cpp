#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
   int data;
   Node *left;
   Node *right;
   Node(int d)
   {
      this->data = d;
      this->left = NULL;
      this->right = NULL;
   }
};

Node *BinarySearchTree(Node *&root, int d)
{
   if (root == nullptr)
   {
      root = new Node(d);
      return root;
   }

   if (d > root->data)
   {
      root->right = BinarySearchTree(root->right, d);
   }
   else
   {
      root->left = BinarySearchTree(root->left, d);
   }
   return root;
}

void Inorder(Node *root)
{
   if (root == NULL)
      return;
   Inorder(root->left);
   cout << root->data << " ";
   Inorder(root->right);
}
void BSTinput(Node *&root)
{
   int data;
   cin >> data;
   while (data != -1)
   {
      root = BinarySearchTree(root, data);
      cin >> data;
   }
}

int main()
{
   Node *root = nullptr;
   cout << "Enter data into BST" << endl;
   BSTinput(root);
   Inorder(root);
   return 0;
}