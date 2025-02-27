#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
   stack<pair<int,int>>st;
    int ele=INT_MAX;
    Solution() {
        // code here
    }

    // Add an element to the top of Stack
    void push(int x) {
        // code here
        ele=min(ele,x);
        st.push({x,ele});
    }

    // Remove the top element from the Stack
    void pop() {
        // code here
        if(!st.empty())
        st.pop();
        if(!st.empty())
        {
            ele=st.top().second;
        }
        else
        {
            ele=INT_MAX;
        }
    }

    // Returns top element of the Stack
    int peek() {
        if(!st.empty())
        return st.top().first;
        else
        return -1;
        // code here
    }

    // Finds minimum element of Stack
    int getMin() {
        // code here
        if(!st.empty())
        return st.top().second;
        else
        return -1;
    }
};

// gfg