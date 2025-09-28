
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     vector<int> longestSubarray(vector<int> &arr, int x)
     {
          multiset<int> st;
          int left = 0;
          int right = 0;
          int start = 0;
          int last = 0;

          while (right < arr.size())
          {
               st.insert(arr[right]);

               while (!st.empty() && (*prev(st.end()) - *st.begin() > x))
               {
                    st.erase(st.find(arr[left]));
                    left++;
               }

               if (right - left + 1 > last - start + 1)
               {
                    start = left;
                    last = right;
               }

               right++;
          }

          vector<int> ans;
          for (int i = start; i <= last; i++)
          {
               ans.push_back(arr[i]);
          }

          return ans;
     }
};

// leetcode  - 976