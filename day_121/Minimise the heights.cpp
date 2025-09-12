#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int getMinDiff(vector<int> &arr, int k)
     {

          int n = arr.size();
          sort(arr.begin(), arr.end());
          int ans = arr[n - 1] - arr[0];

          int smallN = arr[0] + k;
          int largeN = arr[n - 1] - k;
          for (int i = 0; i < n; i++)
          {
               int mini = min(smallN, arr[i + 1] - k);
               int maxi = max(largeN, arr[i] + k);

               if (mini >= 0)
               {
                    ans = min(ans, maxi - mini);
               }
          }

          return ans;
          // yes
     }
};

// Geeksforgeeks