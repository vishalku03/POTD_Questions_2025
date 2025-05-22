
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int maxRemoval(vector<int> &nums, vector<vector<int>> &queries)
     {
          int n = nums.size(), q = queries.size();
          sort(queries.begin(), queries.end());
          vector<int> ans(n + 1);
          int op = 0;
          priority_queue<int> pq;
          int j = 0;
          for (int i = 0; i < n; i++)
          {
               op += ans[i];
               while (j < q && queries[j][0] == i)
               {
                    pq.push(queries[j][1]);
                    j++;
               }
               while (op < nums[i] && !pq.empty())
               {
                    if (pq.top() < i)
                         break;
                    op++;
                    ans[pq.top() + 1]--;
                    pq.pop();
               }
               if (op < nums[i])
                    return -1;
          }
          return pq.size();
     }
};

// leetcode - 3362