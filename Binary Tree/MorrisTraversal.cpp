#include <iostream>
#include <queue>
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
Node *createTree(Node *&root)
{
   cout << "Enter the data: " << endl;
   int data;
   cin >> data;
   root = new Node(data);
   if (data == -1)
   {
      return NULL;
   }
   cout << "Enter data for inserting in left of " << data << endl;
   root->left = createTree(root->left);
   cout << "Enter data for inserting in right of " << data << endl;
   root->right = createTree(root->right);
   return root;
}

void MorrisTraverasal(Node *root)
{
   // cout << "INside Morris Traversal" << endl;
   // Node *temp = root;
   Node *curr = root;
   while (curr != nullptr)
   {

      if (curr->left == nullptr)
      {
         cout << curr->data << " ";
         curr = curr->right;
      }
      else
      {
         Node *prev = curr->left;
         while (prev->right && prev->right != curr)
         {
            prev = prev->right;
         }
         if (prev->right == nullptr)
         {
            prev->right = curr;
            curr = curr->left;
         }
         else
         {
            prev->right = nullptr;
            cout << curr->data << " ";
            curr = curr->right;
         }
      }
   }
}

int main()
{
   Node *root = NULL;
   createTree(root);
   MorrisTraverasal(root);
   return 0;
}