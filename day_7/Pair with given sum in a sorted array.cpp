class Solution
{
public:
     int countPairs(vector<int> &arr, int target)
     {
          // Complete the function
          int count = 0;
          unordered_map<int, int> mp;
          for (int i : arr)
          {
               if (mp.find(target - i) != mp.end())
               {
                    count += mp[target - i];
               }
               mp[i]++;
          }

          return count;
     }
};

// gfg