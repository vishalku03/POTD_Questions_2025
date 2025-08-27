

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int countTriangles(vector<int> &arr)
     {
          int ans = 0;
          int n = arr.size();
          sort(arr.begin(), arr.end());
          for (int i = 0; i < n; i++)
          {
               int left = 0;
               int right = i - 1;
               while (left < right)
               {
                    if (arr[left] + arr[right] > arr[i])
                    {
                         ans = ans + right - left;
                         right--;
                    }
                    else
                    {
                         left++;
                    }
               }
          }

          return ans;
     }
};

// gfg