
#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int minParentheses(string &s)
     {
          int openParenthesis = 0;
          int closeParenthesis = 0;

          for (char ch : s)
          {

               if (ch == '(')
               {
                    openParenthesis++;
               }

               else if (ch == ')')
               {
                    if (openParenthesis > 0)
                    {
                         openParenthesis--;
                    }

                    else
                    {
                         closeParenthesis++;
                    }
               }
          }
          return openParenthesis + closeParenthesis;
     }
};

// gfg