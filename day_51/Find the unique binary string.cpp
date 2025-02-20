#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int getnum(string s)
     {
          return stoi(s, nullptr, 2); // get decimal from binary string
     }
     string findDifferentBinaryString(vector<string> &nums)
     {
          vector<int> n(nums.size());
          for (int i = 0; i < nums.size(); i++)
               n[i] = getnum(nums[i]);
          sort(n.begin(), n.end());
          for (int i = 0; i < n.size(); i++)
          {
               if (i != n[i])
                    return bitset<32>(i).to_string().substr(32 - nums[0].size());
          }
          return bitset<32>(n.back() + 1).to_string().substr(32 - nums[0].size());
     }
};

// lc - 1980