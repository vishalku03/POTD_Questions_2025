
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int sumSubstrings(string &s)
     {
          int ans = 0;
          for (int i = 0; i < s.size(); i++)
          {
               for (int j = i; j < s.size(); j++)
               {
                    ans += stoi(s.substr(i, j - i + 1));
               }
          }

          return ans;
     }
};

// gfg