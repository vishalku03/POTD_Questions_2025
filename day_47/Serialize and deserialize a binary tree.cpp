/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

class Solution
{
public:
     // Function to serialize a tree and return a list containing nodes of tree.
     vector<int> serialize(Node *root)
     {
          // Your code here
          vector<int> ans;
          if (!root)
               return ans;
          queue<Node *> q;
          q.push(root);
          while (!q.empty())
          {
               Node *curr = q.front();
               q.pop();

               if (curr)
               {
                    ans.push_back(curr->data);
                    q.push(curr->left);
                    q.push(curr->right);
               }
               else
               {
                    ans.push_back(-1);
               }
          }
          return ans;
     }

     // Function to deserialize a list and construct the tree.
     Node *deSerialize(vector<int> &arr)
     {
          // Your code here
          int n = arr.size();
          if (arr.empty())
               return NULL;
          Node *root = new Node(arr[0]);
          queue<Node *> q;
          q.push(root);
          int i = 1;
          while (!q.empty() && i < n)
          {
               Node *curr = q.front();
               q.pop();
               if (arr[i] != -1)
               {
                    curr->left = new Node(arr[i]);
                    q.push(curr->left);
               }
               i++;
               if (i < n && arr[i] != -1)
               {
                    curr->right = new Node(arr[i]);
                    q.push(curr->right);
               }
               i++;
          }
          return root;
     }
};

// gfg