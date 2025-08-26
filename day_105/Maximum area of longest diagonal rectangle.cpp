
#include<bits/stdc++.h>
using namespace  std;
class Solution
{
public:
     int areaOfMaxDiagonal(vector<vector<int>> &dimensions)
     {
          int maxDiagonalSq = 0;
          int maxArea = 0;

          for (auto &i : dimensions)
          {
               int diagonalSq = i[0] * i[0] + i[1] * i[1];
               int area = i[0] * i[1];

               if (diagonalSq > maxDiagonalSq)
               {
                    maxDiagonalSq = diagonalSq;
                    maxArea = area;
               }
               else if (diagonalSq == maxDiagonalSq)
               {
                    maxArea = max(maxArea, area);
               }
          }
          return maxArea;
     }
};

//leetcode -  3000