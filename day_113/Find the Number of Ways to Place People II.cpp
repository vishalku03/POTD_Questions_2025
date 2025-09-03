
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int numberOfPairs(vector<vector<int>> &nums)
     {
          sort(nums.begin(), nums.end(), [](auto &x, auto &y)
               {
            if (x[0] == y[0]) return x[1] > y[1];
            return x[0] < y[0]; });

          int n = nums.size();
          int count = 0;

          for (int i = 0; i < n; i++)
          {
               int maxi = INT_MIN;
               for (int j = i + 1; j < n; j++)
               {
                    if (nums[j][1] > nums[i][1])
                         continue;
                    if (nums[j][1] > maxi)
                    {
                         count++;
                         maxi = nums[j][1];
                    }
               }
          }
          return count;
     }
};

// leetcode -  3027