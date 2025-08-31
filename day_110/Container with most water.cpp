#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int maxWater(vector<int> &arr)
     {

          int l = 0;
          int r = arr.size() - 1;
          int ans = 0;
          while (l < r)
          {
               int CurWater = min(arr[l], arr[r]) * (r - l);
               ans = max(ans, CurWater);
               if (arr[l] < arr[r])
                    l++;

               else
                    r--;
          }

          return ans;
     }
};

// gfg
