
#include<bits/stdc++.h>
using  namespace std;

class Solution
{
public:
     long long zeroFilledSubarray(vector<int> &nums)
     {
          long long ans = 0;
          long long num = 0;
          for (int x : nums)
          {
               if (x == 0)
               {
                    num++;
                    ans = ans + num;
               }
               else
               {
                    num = 0;
               }
          }

          return ans;
     }
};

// leetcode -  2348