
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int minJumps(vector<int> &arr)
     {
          int n = arr.size();
          if (n < 2)
               return 0;
          if (arr[0] == 0)
               return -1;
          int lastPos = 0;
          int count = 0;
          int maxi = 0;

          for (int i = 0; i < n; i++)
          {
               maxi = max(maxi, i + arr[i]);

               if (i == lastPos)
               {
                    count++;
                    lastPos = maxi;

                    if (lastPos >= (n - 1))
                         return count;
               }
          }

          return -1;
     }
};

// geeksforgeeks