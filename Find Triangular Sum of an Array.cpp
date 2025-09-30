#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int triangularSum(vector<int> &nums)
     {
          while (nums.size() != 1)
          {
               vector<int> ans;
               for (int i = 1; i < nums.size(); i++)
               {
                    ans.push_back((nums[i] + nums[i - 1]) % 10);
               }

               nums = ans;
          }

          return nums[0];
     }
};

// leetcode -  2221