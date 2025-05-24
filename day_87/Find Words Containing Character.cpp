
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     vector<int> findWordsContaining(vector<string> &words, char x)
     {
          vector<int> ans;
          for (int i = 0; i < words.size(); i++)
          {
               string word = words[i];
               if (words[i].find(x) != string::npos)
               {
                    ans.push_back(i);
               }
          }

          return ans;
     }
};

// leetcode - 2942