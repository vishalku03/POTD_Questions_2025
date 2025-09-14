
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int startStation(vector<int> &gas, vector<int> &cost)
     {

          int start = 0;
          int balance = 0;
          int deficit = 0;

          int n = gas.size();
          for (int i = 0; i < n; i++)
          {
               balance = balance + (gas[i] - cost[i]);

               if (balance < 0)
               {
                    deficit = deficit + balance;
                    start = i + 1;
                    balance = 0;
               }
          }

          return (deficit + balance) >= 0 ? start : -1;
     }
};

// Geeksforgeeks