/*Complete the function below

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution
{
public:
     void find(Node *root, int &k, int &i, int &ans)
     {
          if (root == NULL)
               return;
          find(root->left, k, i, ans);
          i++;
          if (i == k)
          {
               ans = root->data;
               return;
          }
          find(root->right, k, i, ans);
     }
     int kthSmallest(Node *root, int k)
     {
          // add code here.
          int ans = -1;
          int i = 0;
          find(root, k, i, ans);
          return ans;
     }
};

// gfg