class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to find the height of a binary tree.
    int height(Node* node) {
        // code here
        
        if(node==NULL) return -1;
        
        int left_side=height(node->left);
        int right_side=height(node->right);
        
        return 1+ max(left_side, right_side);
    }
};
// gfg