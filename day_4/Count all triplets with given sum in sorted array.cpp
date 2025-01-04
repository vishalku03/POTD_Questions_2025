
int countTriplets(vector<int> &arr, int target)
{
     unordered_map<int, int> freq;
     for (int e : arr)
     {
          freq[e]++;
     }

     int ans = 0;
     for (int i = 0; i < arr.size(); i++)
     {
          freq[arr[i]]--; // Remove the current element from the frequency map
          for (int j = 0; j < i; j++)
          { // Traverse from 0 to i (exclusive)
               int lookfor = target - arr[i] - arr[j];
               if (freq.find(lookfor) != freq.end())
               {
                    ans += freq[lookfor];
               }
          }
     }
     return ans;
}

// gfg