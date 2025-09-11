
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     string sortVowels(string s)
     {
          unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

          vector<char> vowelList;
          for (char c : s)
          {
               if (vowels.find(c) != vowels.end())
               {
                    vowelList.push_back(c);
               }
          }
          sort(vowelList.begin(), vowelList.end());
          int index = 0;
          string ans;
          for (char c : s)
          {
               if (vowels.find(c) != vowels.end())
               {
                    ans += vowelList[index++];
               }
               else
                    ans += c;
          }

          return ans;
     }
};

// leetcode - 2785