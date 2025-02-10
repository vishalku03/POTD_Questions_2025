class Solution
{
public:
     void solve(Node *root, int &k, unordered_map<int, int> &mp, int &ans, int &sum)
     {
          if (!root)
               return;

          sum += root->data;
          if (mp.find(sum - k) != mp.end())
          {
               ans += mp[sum - k];
          }
          mp[sum]++;
          solve(root->left, k, mp, ans, sum);
          solve(root->right, k, mp, ans, sum);

          mp[sum]--;
          sum -= root->data;
     }
     int sumK(Node *root, int k)
     {
          unordered_map<int, int> mp;
          mp[0] = 1;
          if (!root)
               return 0;
          int ans = 0;
          int sum = 0;
          solve(root, k, mp, ans, sum);
          return ans;
     }
};

// gfg