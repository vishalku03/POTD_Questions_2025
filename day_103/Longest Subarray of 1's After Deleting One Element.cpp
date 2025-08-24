
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int longestSubarray(vector<int> &nums)
     {
          int n = nums.size();
          int zeros = 0;     // Count of zeros in the current window
          int left = 0;      // Left pointer of the window
          int maxLength = 0; // Store the maximum length of subarray

          for (int right = 0; right < n; right++)
          {
               if (nums[right] == 0)
               {
                    zeros++;
               }

               while (zeros > 1)
               {
                    if (nums[left] == 0)
                    {
                         zeros--;
                    }
                    left++;
               }

               maxLength = max(maxLength, right - left);
          }
          return maxLength;
     }
};

// leetcode  - 1493