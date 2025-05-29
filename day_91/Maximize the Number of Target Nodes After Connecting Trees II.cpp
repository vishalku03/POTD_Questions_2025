
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     void dfs(vector<vector<int>> &adj, int u, int par, vector<vector<int>> &dp)
     {
          for (int v : adj[u])
          {
               if (v != par)
               {
                    dfs(adj, v, u, dp);
                    dp[u][0] = dp[u][0] + dp[v][1];
                    dp[u][1] = dp[u][1] + dp[v][0] + 1;
               }
          }
          return;
     }
     void dfs1(vector<vector<int>> &adj, int u, int par, vector<vector<int>> &dp, vector<vector<int>> &rooted)
     {
          if (par != -1)
          {
               dp[u][0] = rooted[u][0];
               dp[u][1] = rooted[u][1];
          }
          for (int v : adj[u])
          {
               if (par != v)
               {
                    int o0 = rooted[v][0];
                    int o1 = rooted[v][1];
                    rooted[v][0] = rooted[u][1] - 1;
                    rooted[v][1] = rooted[u][0] + 1;
                    dfs1(adj, v, u, dp, rooted);

                    rooted[v][0] = o0;
                    rooted[v][1] = o1;
               }
          }
     }
     vector<vector<int>> helper(vector<vector<int>> &edges)
     {
          // for each tree node if rooted at this node what is number of nodes at odd dstance and number at even distance
          int n = edges.size() + 1;
          vector<vector<int>> adj(n);
          for (auto it : edges)
          {
               int u = it[0];
               int v = it[1];

               adj[u].push_back(v);
               adj[v].push_back(u);
          }
          vector<vector<int>> rooted(n, vector<int>(2, 0));
          vector<vector<int>> dp(n, vector<int>(2, 0));

          dfs(adj, 0, -1, rooted);

          dfs1(adj, 0, -1, dp, rooted);
          dp[0][0] = rooted[0][0];
          dp[0][1] = rooted[0][1];

          return dp;
     }
     vector<int> maxTargetNodes(vector<vector<int>> &edges1, vector<vector<int>> &edges2)
     {

          int n = edges1.size() + 1;
          int m = edges2.size() + 1;
          vector<vector<int>> dp1 = helper(edges1);
          vector<vector<int>> dp2 = helper(edges2);

          int maxi = 0;

          for (int i = 0; i < m; i++)
          {
               maxi = max(maxi, dp2[i][1]);
          }

          vector<int> ans(n);
          for (int i = 0; i < n; i++)
          {
               ans[i] = dp1[i][0] + maxi + 1;
          }

          return ans;
     }
};

// leetcode -  3373