
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     bool valid(int n)
     {
          while (n)
          {
               if ((n % 10) == 0)
                    return 0;
               n /= 10;
          }

          return 1;
     }

     vector<int> getNoZeroIntegers(int n)
     {
          for (int i = 1; i <= n; ++i)
          {
               int x = i;
               int y = n - i;
               if (valid(x) && valid(y))
                    return {x, y};
          }

          return {};
     }
};

// leetcode  - 1317