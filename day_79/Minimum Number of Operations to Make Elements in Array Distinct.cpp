#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int minimumOperations(vector<int> &nums)
     {
          unordered_map<int, int> ans;
          int res = 0;
          for (int i = 0; i < nums.size(); ++i)
          {
               int num = nums[i];
               if (ans.count(num) && ans[num] >= 3 * res)
               {
                    res = (ans[num] + 1 + 2) / 3;
               }

               ans[num] = i;
          }

          return res;
     }
};

// lc -  3396