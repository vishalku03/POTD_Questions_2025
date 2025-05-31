
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int kthSmallest(vector<vector<int>> &matrix, int k)
     {
          // code here
          int n = matrix.size();
          priority_queue<int> ans;
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < n; j++)
               {
                    ans.push(matrix[i][j]);
                    if (ans.size() > k)
                    {
                         ans.pop();
                    }
               }
          }
          return ans.top();
     }
};

// gfg