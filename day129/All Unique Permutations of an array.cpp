#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        
        do{
            ans.push_back(arr);
        }
        
        while(next_permutation(arr.begin(),arr.end()));
        
        return ans;
        
    }
};


// gfg