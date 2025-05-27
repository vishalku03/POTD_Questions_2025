
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int differenceOfSums(int n, int m)
     {
          int Odd_Sum = 0;
          int Even_Sum = 0;
          for (int i = 0; i <= n; i++)
          {
               if (i % m == 0)
               {
                    Even_Sum += i;
               }
               else
               {
                    Odd_Sum += i;
               }
          }
          return (Odd_Sum - Even_Sum);
     }
};

// lc -  2894