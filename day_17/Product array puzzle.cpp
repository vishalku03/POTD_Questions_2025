class Solution
{

public:
     vector<int> productExceptSelf(vector<int> &arr)
     {

          // code here

          int p = 1, c = 0;

          vector<int> res;

          for (int i : arr)
          {

               if (i != 0)
                    p *= i;

               else
                    c++;
          }

          for (int i = 0; i < arr.size(); i++)
          {

               if (c >= 2)
                    res.push_back({0});

               else if (arr[i] != 0 && c == 0)
                    res.push_back(p / arr[i]);

               else if (arr[i] != 0 && c > 0)
                    res.push_back({0});

               else
                    res.push_back(p);
          }

          return res;
     }
};


// gfg