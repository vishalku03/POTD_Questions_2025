
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     void generate(int n, string &cur, vector<string> &res)
     {
          if ((int)cur.size() == n)
          {
               res.push_back(cur);
               return;
          }

          cur.push_back('0');
          generate(n, cur, res);
          cur.pop_back();

          cur.push_back('1');
          generate(n, cur, res);
          cur.pop_back();
     }

     vector<string> binstr(int n)
     {
          vector<string> res;
          string cur;
          generate(n, cur, res);
          return res;
     }
};

// geeksforgeeks
