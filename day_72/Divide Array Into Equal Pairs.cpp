#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     bool divideArray(vector<int> &nums)
     {
          vector<int> ans(501, 0);
          for (int num : nums)
          {
               ans[num]++;
          }
          for (int count : ans)
          {
               if (count % 2 != 0)
                    return false;
          }
          return true;
     }
};

// lc  - 2206