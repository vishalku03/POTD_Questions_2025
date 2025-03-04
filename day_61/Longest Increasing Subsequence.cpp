#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int lis(vector<int> &arr)
     {
          // code here
          int n = arr.size();
          vector<int> tmp;
          for (int i = 0; i < n; i++)
          {
               auto ind = lower_bound(tmp.begin(), tmp.end(), arr[i]);
               if (ind == tmp.end())
                    tmp.push_back(arr[i]);
               else
                    *ind = arr[i];
          }
          return tmp.size();
     }
};