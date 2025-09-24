
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     vector<string> generateBinary(int n)
     {
          queue<string> q;
          vector<string> ans;
          q.push("1");
          while (n--)
          {
               string str = q.front();
               q.pop();
               ans.push_back(str);
               q.push(str + "0");
               q.push(str + "1");
          }

          return ans;
     }
};

// gfg