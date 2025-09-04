
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int findClosest(int x, int y, int z)
     {
          int differenceXZ = abs(x - z);
          int differenceYZ = abs(y - z);

          if (differenceXZ < differenceYZ)
          {
               return 1;
          }
          else if (differenceYZ < differenceXZ)
          {
               return 2;
          }
          else
               return 0;
     }
};

// leetcode -  3516