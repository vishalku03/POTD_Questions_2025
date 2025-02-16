class Solution
{
public:
     bool backtracking(int ind, int &length, int &n, vector<int> &ans, vector<int> &vis)
     {
          while (ind < length && ans[ind] != 0)
               ind++;
          // we reach end i.e a valid sequence
          if (ind == length)
          {
               return true;
          }

          bool flag = false;

          for (int i = n; i >= 1; i--)
          {
               // we have to use one only once
               if (i == 1)
               {
                    if (vis[i] == 0)
                    {
                         ans[ind] = i;
                         vis[i] = 1;
                         flag = backtracking(ind + 1, length, n, ans, vis);
                         if (flag == true)
                              break;
                         ans[ind] = 0;
                         vis[i] = 0;
                    }
               }
               // all other numbers from 2 to n should be filled twice as per rule
               else
               {
                    if (vis[i] == 0 && ind + i < length && ans[ind + i] == 0)
                    {
                         ans[ind] = i;
                         ans[ind + i] = i;
                         vis[i] = 1;
                         flag = backtracking(ind + 1, length, n, ans, vis);
                         if (flag == true)
                              break;
                         ans[ind] = 0;
                         ans[ind + i] = 0;
                         vis[i] = 0;
                    }
               }
          }
          return flag;
     }

     vector<int> constructDistancedSequence(int n)
     {
          int length = 2 * (n - 1) + 1;
          vector<int> ans(length, 0);
          vector<int> vis(n + 1, 0);
          bool a = backtracking(0, length, n, ans, vis);
          return ans;
     }
};
// lc -  1718