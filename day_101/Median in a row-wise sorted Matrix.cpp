
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int median(vector<vector<int>> &mat)
     {

          vector<int> arr;
          for (int i = 0; i < mat.size(); i++)
          {
               for (int j = 0; j < mat[0].size(); j++)
               {
                    arr.push_back(mat[i][j]);
               }
          }

          sort(arr.begin(), arr.end());
          return arr[(mat.size() * mat[0].size()) / 2];
     }
};

// gfg