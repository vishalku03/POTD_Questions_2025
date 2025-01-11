class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = arr.size();
        int j = 0;
        int i = 0;
        int count = 0;
        
        while(i<n-k+1){
            count++;
            if(count<=k){
                mp[arr[j]]++;
                j++;
            }
            else{
                ans.push_back(mp.size());
                mp.clear();
                i++;
                count=0;
                j = i;
            }
        }
        
        return ans;
        
    }

};