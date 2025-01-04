class Solution
{
public:
     int countPalindromicSubsequence(string s)
     {

          vector<int> start(26, -1), end(26, -1);
          for (int i = 0; i < s.size(); i++)
          {
               if (start[s[i] - 'a'] == -1)
               {
                    start[s[i] - 'a'] = i;
               }
               end[s[i] - 'a'] = i;
          }

          int ans = 0;
          for (int i = 0; i < 26; i++)
          {
               if (start[i] == -1)
                    continue;
               if (end[i] - start[i] >= 2)
               {
                    vector<bool> count(26, 0);
                    for (int j = start[i] + 1; j < end[i]; j++)
                    {
                         if (count[s[j] - 'a'])
                              continue;
                         ans++;
                         count[s[j] - 'a'] = 1;
                    }
               }
          }

          return ans;
     }
};