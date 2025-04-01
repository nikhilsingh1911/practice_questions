#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
   int data;
   Node *left;
   Node *right;

   Node(int val)
   {
      data = val;
      left = right = nullptr;
   }
};

int findPosition(vector<int> &inOrder, int ele, int st, int last)
{
   for (int i = st; i <= last; i++)
   {
      if (inOrder[i] == ele)
      {
         return i;
      }
   }
   return -1;
}

Node *solve(vector<int> &inorder, vector<int> &preOrder, int &ind, int st, int last)
{
   if (st > last)
   {
      return nullptr;
   }

   int ele = preOrder[ind];
   ind++;
   Node *temp = new Node(ele);

   int position = findPosition(inorder, ele, st, last);

   temp->left = solve(inorder, preOrder, ind, st, position - 1);
   temp->right = solve(inorder, preOrder, ind, position + 1, last);

   return temp;
}

Node *buildTree(vector<int> &inorder, vector<int> &preOrder)
{
   int preOrderIndex = 0;
   return solve(inorder, preOrder, preOrderIndex, 0, inorder.size() - 1);
}

void printTree(Node *root, int space = 0, int count = 5)
{
   if (root == nullptr)
   {
      return;
   }

   space += count;

   printTree(root->right, space);

   cout << endl;
   for (int i = count; i < space; i++)
   {
      cout << " ";
   }
   cout << root->data << "\n";

   printTree(root->left, space);
}

int main()
{
   vector<int> inorder = {4, 2, 5, 1, 6, 3, 7};
   vector<int> preorder = {1, 2, 4, 5, 3, 6, 7};

   Node *root = buildTree(inorder, preorder);

   cout << "Tree Structure:\n";
   printTree(root);
   cout << endl;

   return 0;
}
