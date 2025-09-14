
#include <iostream>
using namespace std;
class Solution
{
public:
     int maxFreqSum(string s)
     {
          int frq[26] = {0};
          for (int i = 0; i < s.size(); i++)
          {
               frq[s[i] - 'a']++;
          }

          int maxCons = 0;
          int maxVow = 0;
          for (int i = 0; i < 26; i++)
          {
               if ('a' + i == 'a' || 'a' + i == 'e' || 'a' + i == 'i' ||
                   'a' + i == 'o' || 'a' + i == 'u')
                    maxVow = max(frq[i], maxVow);
               else
               {
                    maxCons = max(maxCons, frq[i]);
               }
          }
          return maxCons + maxVow;
     }
};

int main()
{
     Solution s;
     string str = "leetcode";
     cout<<s.maxFreqSum(str);
     return 0;
}

// leetode -  3541