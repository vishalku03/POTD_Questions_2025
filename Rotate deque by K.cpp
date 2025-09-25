
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     void rotateDeque(deque<int> &dq, int type, int k)
     {

          if (k % dq.size() == 0)
          {
               return;
          }

          while (k--)
          {
               if (type == 1)
               {
                    int rearElement = dq.back();
                    dq.pop_back();
                    dq.push_front(rearElement);
               }

               else
               {
                    int frontElement = dq.front();
                    dq.pop_front();
                    dq.push_back(frontElement);
               }
          }
     }
};

// gfg