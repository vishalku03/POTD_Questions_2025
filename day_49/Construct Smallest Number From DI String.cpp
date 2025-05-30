
class Solution
{
public:
     bool isMatched(string s, string pattern)
     {
          int n = pattern.size();
          for (int i = 0; i < n; i++)
          {
               if (pattern[i] == 'I' && s[i] > s[i + 1] ||
                   pattern[i] == 'D' && s[i] < s[i + 1])
               {
                    return false;
               }
          }
          return true;
     }
     string smallestNumber(string pattern)
     {
          int n = pattern.size();
          string ans = "";
          for (int i = 1; i <= n + 1; i++)
          {
               ans.push_back(i + '0');
          }

          while (!isMatched(ans, pattern))
          {
               next_permutation(ans.begin(), ans.end());
          }
          return ans;
     }
};

// lc -  2375