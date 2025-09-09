
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int assignHole(vector<int> &mices, vector<int> &holes)
     {
          int i = 0;
          int j = 0;
          int maxi = INT_MIN;
          sort(mices.begin(), mices.end());
          sort(holes.begin(), holes.end());
          while (i < mices.size())
          {
               int Diff = abs(holes[j] - mices[i]);
               maxi = max(maxi, Diff);
               i++;
               j++;
          }

          return maxi;
     }
};

// geeksforgeeks