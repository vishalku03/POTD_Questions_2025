
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int peopleAwareOfSecret(int n, int delay, int forget)
     {
          const int MOD = 1e9 + 7;
          vector<long long> dp(n + 1, 0);
          dp[1] = 1;
          long long share = 0; // active sharers
          long long res = 0;

          for (int i = 2; i <= n; i++)
          {
               // update share count
               if (i - delay >= 1)
                    share = (share + dp[i - delay]) % MOD;
               if (i - forget >= 1)
                    share = (share - dp[i - forget] + MOD) % MOD;

               dp[i] = share; // new learners on day i
          }

          // count those who still remember at day n
          for (int i = n - forget + 1; i <= n; i++)
          {
               if (i >= 1)
                    res = (res + dp[i]) % MOD;
          }
          return (int)res;
     }
};

// leetcode -  2327