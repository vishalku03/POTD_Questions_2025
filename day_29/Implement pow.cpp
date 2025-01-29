#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     double power(double b, int e)
     {

          int num = abs(e);
          double ans = 1;
          while (num)
          {
               if (num % 2 == 0)
               {
                    b = b * b;
                    num /= 2;
               }
               else
               {
                    ans = ans * b;
                    num = num - 1;
               }
          }
          if (e < 0)
               return 1 / ans;
          return ans;
     }
};

// gfg