#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int maxLength(string &s)
     {

          int n = s.size();
          int ans = 0;
          vector<int> dp(n + 1, 0);
          stack<int> st;
          for (int i = 0; i < n; i++)
          {
               if (s[i] == '(')
               {
                    st.push(i);
                    continue;
               }
               if (st.empty())
                    continue;
               int j = st.top();
               st.pop();
               dp[i] = i - j + 1;
               if (j >= 1)
                    dp[i] += dp[j - 1];
               ans = max(ans, dp[i]);
          }

          return ans;
     }
};

// gfg