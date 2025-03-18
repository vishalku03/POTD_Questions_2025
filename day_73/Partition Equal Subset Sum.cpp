
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     bool equalPartition(vector<int> &arr)
     {
          int sum = 0;
          for (auto &i : arr)
          {
               sum += i;
          }

          if (sum % 2 != 0)
               return false;
          int sizeOfArr = arr.size();
          int target = sum / 2;

          vector<bool> dp(target + 1, 0);
          dp[0] = true;

          for (int nums : arr)
          {
               for (int i = target; i >= nums; i--)
               {
                    dp[i] = dp[i] || dp[i - nums];
               }
          }
          return dp[target];
     }
};

// gfg