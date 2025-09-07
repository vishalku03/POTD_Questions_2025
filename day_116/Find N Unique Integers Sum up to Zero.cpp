
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     vector<int> sumZero(int n)
     {
          vector<int> arr(n);
          int ans = 1;

          for (int i = 0; i < n / 2; i++)
          {
               arr[i] = ans;
               arr[n - 1 - i] = -ans;
               ans++;
          }
          return arr;
     }
};

// leeetcode  -1304