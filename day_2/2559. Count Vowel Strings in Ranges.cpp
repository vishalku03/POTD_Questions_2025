
class Solution
{
public:
     bool isVowel(char c)
     {
          return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
     }
     vector<int> vowelStrings(vector<string> &w, vector<vector<int>> &q)
     {
          int n = w.size();
          vector<int> p(n + 1, 0);
          for (int i = 0; i < n; ++i)
          {
               p[i + 1] = p[i] + (isVowel(w[i][0]) && isVowel(w[i].back()));
          }
          vector<int> r;
          for (auto &v : q)
          {
               r.push_back(p[v[1] + 1] - p[v[0]]);
          }
          return r;
     }
};