
class Solution
{
public:
     int func(int node, vector<int> &par)
     {
          if (node == par[node])
          {
               return node;
          }
          else
          {
               return func(par[node], par);
          }
     }

     vector<int> findRedundantConnection(vector<vector<int>> &edges)
     {
          vector<int> ans, par(edges.size() + 1);
          for (int i = 0; i < par.size(); i++)
               par[i] = i;
          for (auto i : edges)
          {
               int n1 = i[0];
               int n2 = i[1];
               int p1 = func(n1, par);
               int p2 = func(n2, par);
               if (p1 == p2)
                    ans = {n1, n2};
               else
                    par[p2] = p1;
          }
          return ans;
     }
};

// lc - 684