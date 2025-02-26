
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int getMaxArea(vector<int> &arr)
     {
          // Your code here
          int n = arr.size();
          vector<int> prev(n, -1), next(n, n);

          stack<int> st;
          for (int i = 0; i < n; i++)
          {
               while (!st.empty() && arr[st.top()] >= arr[i])
               {
                    next[st.top()] = i;
                    st.pop();
               }
               if (!st.empty())
               {
                    prev[i] = st.top();
               }
               st.push(i);
          }

          int ans = 0;
          for (int i = 0; i < n; i++)
          {
               ans = max(ans, (next[i] - prev[i] - 1) * arr[i]);
          }
          return ans;
     }
};

// gfg