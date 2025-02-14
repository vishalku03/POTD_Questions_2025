
class Solution
{
public:
     int minOperations(vector<int> &nums, int k)
     {
          priority_queue<long long, vector<long long>, greater<long long>> pq;
          for (int num : nums)
          {
               pq.push((long long)num);
          }
          int operations = 0;
          while (!pq.empty() && pq.top() < k && pq.size() >= 2)
          {
               long long x = pq.top();
               pq.pop();
               long long y = pq.top();
               pq.pop();
               long long newNum = std::min(x, y) * 2 + std::max(x, y);
               pq.push(newNum);
               operations++;
          }
          return operations;
     }
};