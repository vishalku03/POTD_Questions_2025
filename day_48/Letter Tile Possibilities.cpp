
class Solution
{
public:
     void count(vector<int> &arr, int n, int &ans)
     {
          if (n <= 0)
               return;
          for (int i = 0; i < 26; i++)
          {
               if (arr[i] > 0)
               {
                    arr[i]--;
                    ans++;
                    count(arr, n - 1, ans);
                    arr[i]++;
               }
          }
     }
     int numTilePossibilities(string tiles)
     {
          vector<int> arr(26, 0);
          for (int i = 0; i < tiles.size(); i++)
          {
               arr[int(tiles[i]) - 65]++;
          }
          int ans = 0;
          count(arr, tiles.size(), ans);
          return ans;
     }
};

// lc -  1079