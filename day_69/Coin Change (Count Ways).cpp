#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int count(vector<int> &coins, int sum)
     {
          int n = coins.size();
          vector<int> dp(sum + 1, 0);
          dp[0] = 1;
          for (int i = 0; i < n; i++)
          {
               int y = coins[i];

               for (int j = y; j <= sum; j++)
               {
                    dp[j] += dp[j - y];
               }
          }

          return dp[sum];
     }
};

// gfg