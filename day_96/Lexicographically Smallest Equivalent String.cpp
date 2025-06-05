
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     class DSU
     {
     public:
          vector<int> parent;
          DSU(int n)
          {
               parent.resize(n);
               for (int i = 0; i < n; i++)
                    parent[i] = i;
          }
          int findP(int x)
          {
               if (parent[x] == x)
                    return x;
               return parent[x] = findP(parent[x]);
          }
          void unite(int u, int v)
          {
               int up = findP(u);
               int vp = findP(v);
               if (up == vp)
                    return;
               if (up < vp)
               {
                    parent[vp] = parent[up];
               }
               else
               {
                    parent[up] = parent[vp];
               }
          }
     };
     string smallestEquivalentString(string s1, string s2, string baseStr)
     {
          DSU ds(26);
          for (int i = 0; i < s1.length(); i++)
          {
               ds.unite(s1[i] - 'a', s2[i] - 'a');
          }
          string ans;
          for (int i = 0; i < baseStr.length(); i++)
          {
               ans.push_back(ds.findP(baseStr[i] - 'a') + 'a');
          }
          return ans;
     }
};

// leetcode  - 1061