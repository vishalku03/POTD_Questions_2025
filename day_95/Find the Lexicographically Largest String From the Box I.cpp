
#include<bits/stdc++.h>
using  namespace std;

class Solution
{
public:
     string answerString(string word, int numFriends)
     {
          if (numFriends == 1)
               return word;

          int n = word.size();
          int len = word.length();
          string ans = "";

          for (int i = 0; i < n; ++i)
          {
               string sub = word.substr(i, min(len - numFriends + 1, n - i));
               if (sub > ans)
                    ans = sub;
          }

          return ans;
     }
};

//leetcode -  3403