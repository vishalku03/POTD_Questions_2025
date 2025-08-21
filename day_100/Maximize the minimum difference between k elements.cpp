
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int maxMinDiff(vector<int> &arr, int k)
     {
          sort(arr.begin(), arr.end());
          int l = 0;
          int r = 1e5;
          while (l <= r)
          {
               int mid = (l + r) / 2;
               int prv = arr[0], cnt = 1;
               for (int i = 1; i < arr.size(); i++)
               {
                    if (arr[i] - prv >= mid)
                    {
                         prv = arr[i];
                         cnt++;
                    }
               }
               if (cnt >= k)
                    l = mid + 1;

               else
                    r = mid - 1;
          }
          return r;
     }
};

//  gfg