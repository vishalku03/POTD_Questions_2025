
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int numSubmat(vector<vector<int>> &mat)
     {
          int n = mat.size();
          int m = mat[0].size();
          int ans = 0;
          vector<int> heights(m, 0);
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    if (mat[i][j] == 0)
                         heights[j] = 0;
                    else
                         heights[j] += 1;
               }

               for (int j = 0; j < m; j++)
               {
                    int minHeight = heights[j];
                    for (int k = j; k >= 0 && minHeight > 0; k--)
                    {
                         minHeight = min(minHeight, heights[k]);
                         ans += minHeight;
                    }
               }
          }

          return ans;
     }
};

// leetcode  - 1504