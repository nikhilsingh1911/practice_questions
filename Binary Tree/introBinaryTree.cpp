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
   int data;    // This stores the value of the node
   Node *left;  // Pointer to the left child
   Node *right; // Pointer to the right child
   Node(int d)  // Constructor to create a node with the given data
   {
      this->data = d;
      this->left = NULL;
      this->right = NULL;
   }
};

// Recursive function to create the tree. It will take user input to add nodes.
Node *createTree(Node *&root)
{
   cout << "Enter the data: " << endl;
   int data;
   cin >> data;           // Taking input for the current node's data
   root = new Node(data); // Creating the new node
   // If data is -1, it means we don't add any more nodes, return NULL (no child).
   if (data == -1)
   {
      return NULL;
   }
   // Otherwise, recursively create the left and right subtrees
   cout << "Enter data for inserting in left of " << data << endl;
   root->left = createTree(root->left); // Recursively create the left subtree
   cout << "Enter data for inserting in right of " << data << endl;
   root->right = createTree(root->right); // Recursively create the right subtree
   return root;                           // Return the current node
}
// Function to print the tree in level-order (Breadth-First Traversal)
void printTree(Node *root)
{
   if (root == NULL)
      return;       // If the tree is empty, do nothing
   queue<Node *> q; // Queue to help with level-order traversal
   q.push(root);    // Push the root node onto the queue
   q.push(NULL);    // This NULL marker helps to print level by level
   while (!q.empty())
   {
      Node *temp = q.front(); // Get the front node from the queue
      q.pop();                // Pop the node from the queue
      if (temp == NULL)       // When NULL is encountered, it's the end of a level
      {
         cout << endl;   // Print a new line for each level
         if (!q.empty()) // If there are more nodes in the queue, push another NULL to mark the next level
         {
            q.push(NULL);
         }
      }
      else
      {
         cout << temp->data << " "; // Print the current node's data
         // If the current node has a left child, push it to the queue
         if (temp->left)
         {
            q.push(temp->left);
         }
         // If the current node has a right child, push it to the queue
         if (temp->right)
         {
            q.push(temp->right);
         }
      }
   }
}
// In-order traversal (Left, Root, Right) - Recursive
void Inorder(Node *root)
{
   if (root == NULL)
      return; // Base case: if the node is NULL, do nothing
   // Recursively traverse the left subtree
   Inorder(root->left);
   cout << root->data << " "; // Print the data of the current node
   // Recursively traverse the right subtree
   Inorder(root->right);
}
// Post-order traversal (Left, Right, Root) - Recursive
void PostOrder(Node *root)
{
   if (root == NULL)
      return; // Base case: if the node is NULL, do nothing
   // First, traverse the left subtree
   PostOrder(root->left);
   // Then, traverse the right subtree
   PostOrder(root->right);
   // Finally, print the current node's data
   cout << root->data << " ";
}

// Pre-order traversal (Root, Left, Right) - Recursive
void PreOrder(Node *root)
{
   if (root == NULL)
      return;                 // Base case: if the node is NULL, do nothing
   cout << root->data << " "; // Print the data of the current node first
   // Recursively traverse the left subtree
   PreOrder(root->left);
   // Recursively traverse the right subtree
   PreOrder(root->right);
}
// Function to build the tree level by level (iterative approach using a queue)
void buildLeveTree(Node *&root)
{
   queue<Node *> q; // Queue to help with level-order insertion
   cout << "Enter Data for Root: " << endl;
   int data;
   cin >> data;           // Input the root node data
   root = new Node(data); // Create the root node
   q.push(root);          // Push the root node into the queue
   while (!q.empty())     // Loop until all nodes have been inserted
   {
      Node *temp = q.front(); // Get the front node from the queue
      q.pop();                // Pop it from the queue
      // Input the left child for the current node
      cout << "Enter left node for " << temp->data << endl;
      int leftdata;
      cin >> leftdata;
      // If the input is not -1, create the left child and add it to the queue
      if (leftdata != -1)
      {
         temp->left = new Node(leftdata);
         q.push(temp->left); // Add the left child to the queue
      }
      // Input the right child for the current node
      cout << "Enter right node for " << temp->data << endl;
      int rightSide;
      cin >> rightSide;
      // If the input is not -1, create the right child and add it to the queue
      if (rightSide != -1)
      {
         temp->right = new Node(rightSide);
         q.push(temp->right); // Add the right child to the queue
      }
   }
}

int main()
{
   Node *root = NULL;   // Start with an empty tree
   buildLeveTree(root); // Build the tree by level-order insertion
   // Print the tree in level-order
   printTree(root);
   // Uncomment to test traversals
   /*
   cout << "In-order traversal: ";
   Inorder(root);
   cout << endl;
   cout << "Pre-order traversal: ";
   PreOrder(root);
   cout << endl;
   cout << "Post-order traversal: ";
   PostOrder(root);
   cout << endl;
   */
   return 0;
}