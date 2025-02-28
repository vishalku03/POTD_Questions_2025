

class Solution
{
public:
     string shortestCommonSupersequence(string str1, string str2)
     {
          int len1 = str1.size();
          int len2 = str2.size();
          vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
          for (int i = 1; i <= len1; i++)
          {
               for (int j = 1; j <= len2; j++)
               {
                    if (str1[i - 1] == str2[j - 1])
                         dp[i][j] = dp[i - 1][j - 1] + 1;
                    else
                         dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
               }
          }

          string result;
          int str1Idx = len1 - 1, str2Idx = len2 - 1;
          int i = len1, j = len2;
          while (i > 0 && j > 0)
          {
               if (str1[i - 1] == str2[j - 1])
               {
                    while (str1Idx > i - 1)
                         result += str1[str1Idx--];
                    while (str2Idx > j - 1)
                         result += str2[str2Idx--];
                    result += str1[i - 1];
                    str1Idx--;
                    str2Idx--;
                    i--;
                    j--;
               }
               else if (dp[i - 1][j] > dp[i][j - 1])
                    i--;
               else
                    j--;
          }
          while (str1Idx >= 0)
               result += str1[str1Idx--];
          while (str2Idx >= 0)
               result += str2[str2Idx--];
          reverse(result.begin(), result.end());
          return result;
     }
};

// lc -  1092