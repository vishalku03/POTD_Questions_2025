class Solution
{
public:
     // Function to find equilibrium point in the array.
     int findEquilibrium(vector<int> &arr)
     {
          int n = arr.size();

          int totalSum = accumulate(begin(arr), end(arr), 0);

          int currSum = 0;

          for (int i = 0; i < n; ++i)
          {
               currSum += arr[i];

               if (currSum == totalSum)
                    return i;

               totalSum -= arr[i];
          }

          return -1;
     }
};

// gfg