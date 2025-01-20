// Height of Binary Tree
// In this question we will find the height of the  Binary Tree
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

Node *createBTree(Node *&root)
{
   cout << "Enter the Data: " << endl;
   int data;
   cin >> data;
   root = new Node(data);
   if (data == -1)
   {
      return NULL;
   }
   cout << "Enter data for inserting in left of " << data << endl;
   root->left = createBTree(root->left);
   cout << "Enter data for inserting in right of " << data << endl;
   root->right = createBTree(root->right);
   return root;
}

int HeightOfTree(Node *root)
{
   int cnt = 0;
   while (root != NULL)
   {
      if (root->left != NULL || root->right != NULL)
      {
         cnt++;
      }
      if (root->left != NULL && root->right == NULL)
      {
         root = root->left;
      }
      else
      {
         root = root->right;
      }
   }
   return cnt;
}

int HeightOfTreeUsingRecursion(Node *root)
{
   if (root == NULL)
   {
      return -1;
   }
   int left = HeightOfTreeUsingRecursion(root->left);
   int right = HeightOfTreeUsingRecursion(root->right);
   int ans = max(left, right) + 1;
   return ans;
}

void PrintBTree(Node *root)
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

int main()
{
   Node *root = NULL;
   createBTree(root);
   int height = HeightOfTree(root);
   int heightR = HeightOfTreeUsingRecursion(root);
   PrintBTree(root);
   cout << "Height of the tree is " << height << endl;
   cout << "Height of the tree using recursion " << heightR << endl;
}