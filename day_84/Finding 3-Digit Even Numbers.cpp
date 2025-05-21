#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     vector<int> findEvenNumbers(vector<int> &digits)
     {
          vector<int> mpp(10);
          for (int i : digits)
               mpp[i]++;

          vector<int> res;
          for (int i = 100; i <= 999; i += 2)
          {
               int a = i;
               vector<int> hash = mpp;
               bool flag = true;
               while (a)
               {
                    int dig = a % 10;
                    hash[dig]--;
                    if (hash[dig] < 0)
                    {
                         flag = false;
                         break;
                    }
                    a /= 10;
               }
               if (flag)
                    res.push_back(i);
          }
          return res;
     }
};

// lc -  2094