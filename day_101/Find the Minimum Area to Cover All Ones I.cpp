#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int minimumArea(vector<vector<int>> &grid)
     {

          int rows = grid.size();
          int cols = grid[0].size();
          int top = rows;
          int bottom = -1;
          int left = cols;
          int right = -1;

          for (int i = 0; i < rows; ++i)
          {
               for (int j = 0; j < cols; ++j)
               {
                    if (grid[i][j] == 1)
                    {
                         top = min(top, i);
                         bottom = max(bottom, i);
                         left = min(left, j);
                         right = max(right, j);
                    }
               }
          }

          if (top > bottom || left > right)
               return 0;
          return (bottom - top + 1) * (right - left + 1);
     }
};

// leetcode -  3195