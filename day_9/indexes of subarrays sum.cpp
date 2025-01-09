class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
       
       int n = arr.size();
       int left  = 0;
       int right = 0;
       int sum = 0;
       while(right<n)
       {
           sum =  sum+arr[right];
           while(left < right && sum>target)
           {
               sum = sum - arr[left];
               left++;
           }
           
           if(sum == target)
           {
               return { left+1 , right+1};
           }
           right++;
       }
       
       return {-1};
    }
};

// gfg