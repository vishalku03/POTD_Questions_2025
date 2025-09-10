
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     string largestSwap(string &s)
     {
          vector<int> ans(10, -1);
          for (int i = 0; i < s.size(); i++)
          {
               ans[s[i] - '0'] = i;
          }
          for (int i = 0; i < s.size(); i++)
          {
               for (int j = 9; j >= 0; j--)
               {
                    if (ans[j] != -1 && ans[j] > i && j > s[i] - '0')
                    {
                         swap(s[i], s[ans[j]]);
                         return s;
                    }
               }
          }

          return s;
     }
};

// geeksforgeeks