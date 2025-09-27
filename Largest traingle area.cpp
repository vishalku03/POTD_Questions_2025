

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) {
        int n= arr.size();
        queue<int>q;
        int Operation  = 0;
        for(int i = 0;i<n;i++)
        {
            if(!q.empty() && i==q.front())
            q.pop();
            
            int bit = arr[i];
            if(!q.empty() && q.size()%2 ==1)
            bit^=1;
            
            if(bit==0)
            {
                if(i+k > n)
                return -1;
                Operation++;
                q.push(i+k);
            }
            
        }
         return Operation;
    }
};


// leetcode - 812