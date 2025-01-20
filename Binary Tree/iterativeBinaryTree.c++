// In this code, we will learn how to traverse a binary tree iteratively using a stack.
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Node
{
public:
   int data;    // Holds the value of the node
   Node *left;  // Pointer to the left child
   Node *right; // Pointer to the right child
   Node(int d)
   {
      this->data = d;
      this->left = NULL;
      this->right = NULL;
   }
};

// Function to create a binary tree. It takes input from the user to insert nodes.
Node *createTree(Node *&root)
{
   cout << "Enter the root node data: " << endl;
   int data;
   cin >> data;
   root = new Node(data);

   // If user enters -1, we stop recursion and return NULL (meaning no further nodes here).
   if (data == -1)
   {
      return NULL;
   }

   cout << "Enter data for inserting in left of " << data << endl;
   root->left = createTree(root->left); // Recursively create the left subtree

   cout << "Enter data for inserting in right of " << data << endl;
   root->right = createTree(root->right); // Recursively create the right subtree

   return root;
}

// Iterative In-order traversal (Left, Root, Right) using stack.
vector<int> inOrder(Node *root)
{
   stack<Node *> st; // Stack to keep track of nodes during traversal
   Node *temp = root;
   vector<int> res; // To store the result of traversal

   while (!st.empty() || temp != NULL)
   {
      // Traverse the left subtree
      while (temp != NULL)
      {
         st.push(temp);     // Push current node to stack
         temp = temp->left; // Move to left child
      }

      // Pop from stack and process the node
      temp = st.top();           // Peek the top node in the stack
      st.pop();                  // Pop the node
      res.push_back(temp->data); // Add the node's data to result
      temp = temp->right;        // Now, move to the right child
   }
   return res; // Return the result after traversing all nodes
}

// Iterative Pre-order traversal (Root, Left, Right) using stack.
vector<int> preOrder(Node *root)
{
   stack<Node *> st; // Stack to store nodes during traversal
   vector<int> res;  // To store the result of traversal
   if (root == NULL) // If tree is empty, return an empty vector
   {
      return res;
   }
   st.push(root); // Start with the root node

   while (!st.empty())
   {
      root = st.top();           // Get the top node from the stack
      st.pop();                  // Pop the node from the stack
      res.push_back(root->data); // Add the node's data to the result

      // First push the right child, then the left child to ensure left is processed first
      if (root->right != NULL)
      {
         st.push(root->right);
      }
      if (root->left != NULL)
      {
         st.push(root->left);
      }
   }
   return res; // Return the result after traversing all nodes
}

// Iterative Post-order traversal (Left, Right, Root) using one stack.
vector<int> postOrder(Node *root)
{
   vector<int> ans;  // To store the post-order traversal result
   if (root == NULL) // If the tree is empty, return an empty result
   {
      return ans;
   }

   stack<Node *> st;         // Stack to simulate the recursive call stack
   Node *lastVisited = NULL; // This keeps track of the last visited node (important to handle right child)

   while (!st.empty() || root != NULL)
   {
      // Traverse to the leftmost node
      if (root != NULL)
      {
         st.push(root);     // Push the current node onto the stack
         root = root->left; // Move to the left child
      }
      else
      {
         // Peek the node at the top of the stack
         Node *peekNode = st.top();

         // Here's the tricky part: We only process the node if its right child is NULL
         // or if the right child has already been processed (marked as lastVisited).
         if (peekNode->right == NULL || peekNode->right == lastVisited)
         {
            ans.push_back(peekNode->data); // Add the node's value to the result
            st.pop();                      // Pop the node from the stack
            lastVisited = peekNode;        // Mark this node as the last visited
         }
         else
         {
            // Otherwise, move to the right child (we process right child first)
            root = peekNode->right;
         }
      }
   }
   return ans; // Return the post-order result after all nodes have been processed
}

int main()
{
   Node *root = NULL; // Root of the binary tree
   createTree(root);  // Create the binary tree by taking user input

   // You can call different traversal functions here to see the output
   // For example, printing the result of postOrder traversal:
   vector<int> postorderResult = postOrder(root);
   cout << "Post-order traversal: ";
   for (int val : postorderResult)
   {
      cout << val << " "; // Print the result of post-order traversal
   }
   cout << endl;

   // Similarly, you can print results of inOrder and preOrder traversals
}
