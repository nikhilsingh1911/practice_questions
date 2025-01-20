// Binary tree:-Tree is a Non Linear Data structure.
//  Binary Tree can have nodes less or equal to 2 nodes
// Binary Tree cannot have more than 2 nodes
//  Root Node: from where the tree has started is called root node.

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
   cout << "Enter data for inserting in left of" << data << endl;
   root->left = createTree(root->left);
   cout << "Enter data for inserting in right of" << data << endl;
   root->right = createTree(root->right);
   return root;
}

void printTree(Node *root)
{
   queue<Node *> q;
   q.push(root);
   q.push(NULL);
   while (!q.empty())
   {
      Node *temp = q.front();

      q.pop();
      if (temp == NULL)
      {
         cout << endl;
         if (!q.empty())
         {
            q.push(NULL);
         }
      }
      else
      {
         cout << temp->data << " ";
         if (temp->left)
         {
            q.push(temp->left);
         }
         if (temp->right)
         {
            q.push(temp->right);
         }
      }
   }
}

// reverse level order traversal
// homework
// Inorder, preorder, postorder solve it using iteration
void Inorder(Node *root)
{
   if (root == NULL)
   {
      return;
   }
   Inorder(root->left);
   cout << root->data << " ";
   Inorder(root->right);
}

void PostOrder(Node *root)
{
   if (root == NULL)
   {
      return;
   }
   PostOrder(root->left);
   PostOrder(root->right);
   cout << root->data << " ";
}

void PreOrder(Node *root)
{
   if (root == NULL)
   {
      return;
   }
   cout << root->data << " ";
   PreOrder(root->left);
   PreOrder(root->right);
}

void buildLeveTree(Node *&root)
{
   queue<Node *> q;
   cout << "Enter Data for Root: " << endl;
   int data;
   cin >> data;
   root = new Node(data);
   q.push(root);
   while (!q.empty())
   {
      Node *temp = q.front();
      q.pop();
      cout << "Enter left node for " << temp->data << endl;
      int leftdata;
      cin >> leftdata;
      if (leftdata != -1)
      {
         temp->left = new Node(leftdata);
         q.push(temp->left);
      }
      cout << "Enter right node for " << temp->data << endl;
      int rightSide;
      cin >> rightSide;
      if (rightSide != -1)
      {
         temp->right = new Node(rightSide);
         q.push(temp->right);
      }
   }
}

int main()
{
   Node *root = NULL;

   buildLeveTree(root);
   printTree(root);
   /*
   root = createTree(root);
   cout << "Printing the Tree: " << endl;
   printTree(root);
   cout << endl;
   cout << "In order traversal" << endl;
   Inorder(root);
   cout << endl;
   cout << "Preorder traversal" << endl;
   PreOrder(root);
   cout << endl;
   cout << "Post Order traversal" << endl;
   PostOrder(root);
   return 0;
   */
   //  aa 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
}