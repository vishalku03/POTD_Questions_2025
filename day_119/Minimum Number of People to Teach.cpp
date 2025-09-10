
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int minimumTeachings(int n, vector<vector<int>> &languages, vector<vector<int>> &friendships)
     {
          vector<set<int>> l;
          for (auto it : languages)
          {
               set<int> st;
               for (auto i : it)
                    st.insert(i);
               l.push_back(st);
          }
          set<int> dontSpeak;
          for (auto it : friendships)
          {
               int u = it[0] - 1, v = it[1] - 1;
               bool ok = true;
               for (auto t : l[u])
               {
                    if (l[v].count(t))
                    {
                         ok = false;
                         break;
                    }
               }
               if (ok)
               {
                    dontSpeak.insert(u);
                    dontSpeak.insert(v);
               }
          }
          vector<int> spLang(n + 1, 0);
          for (auto u : dontSpeak)
          {
               for (auto i : l[u])
               {
                    spLang[i]++;
               }
          }
          int maxi = 0;
          for (int i = 1; i <= n; i++)
          {
               maxi = max(maxi, spLang[i]);
          }
          return dontSpeak.size() - maxi;
     }
};

//  leetcode -  1733