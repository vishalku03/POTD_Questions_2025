
class Solution
{
public:
     int minCost(vector<vector<int>> &houses)
     {
          int n = houses.size();
          int ans = 0;
          vector<pair<int, int>> adj[n];
          for (int i = 0; i < n; i++)
          {
               for (int j = i + 1; j < n; j++)
               {
                    int distance = abs(houses[j][0] - houses[i][0]) + abs(houses[j][1] - houses[i][1]);

                    adj[i].push_back({j, distance});
                    adj[j].push_back({i, distance});
               }
          }
          priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
          vector<int> visited(n, 0);
          pq.push({0, 0});
          while (!pq.empty())
          {
               int wt = pq.top().first;
               int node = pq.top().second;
               pq.pop();
               if (visited[node] == 1)
                    continue;
               visited[node] = 1;
               ans += wt;
               for (int i = 0; i < adj[node].size(); i++)
               {
                    int adj_node = adj[node][i].first;
                    int adj_wt = adj[node][i].second;
                    if (!visited[adj_node])
                    {
                         pq.push({adj_wt, adj_node});
                    }
               }
          }
          return ans;
     }
};

// gfg