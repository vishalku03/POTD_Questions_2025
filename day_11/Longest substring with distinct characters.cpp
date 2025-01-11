class Solution
{
public:
     int longestUniqueSubstr(string &s)
     {
          // code here
          int n = s.size(), i = 0, j = 0, ans = 0;
          vector<bool> freq(26, false);
          while (j < n)
          {
               int val = s[j] - 'a';
               while (freq[val])
               {
                    freq[s[i] - 'a'] = false;
                    i++;
               }
               ans = max(ans, j - i + 1);
               freq[val] = true;
               j++;
          }
          return ans;
     }
};

// gfg