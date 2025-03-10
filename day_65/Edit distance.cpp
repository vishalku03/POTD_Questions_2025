
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int editDistance(string &s1, string &s2)
     {
          // code here
          int n = s1.length(), m = s2.length();
          vector<int> prev(m + 1, 0);
          for (int j = 0; j <= m; j++)
               prev[j] = j;

          for (int i = 1; i <= n; i++)
          {
               vector<int> curr(m + 1, 0);
               curr[0] = i;
               for (int j = 1; j <= m; j++)
               {
                    if (s1[i - 1] == s2[j - 1])
                         curr[j] = prev[j - 1];
                    else
                    {
                         curr[j] = 1 + min(prev[j - 1], min(prev[j], curr[j - 1]));
                    }
               }
               prev = curr;
          }
          return prev[m];
     }
};

// gfg