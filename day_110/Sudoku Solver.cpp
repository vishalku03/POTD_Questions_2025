
#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     void solveSudoku(vector<vector<char>> &board)
     {
          solve(board);
     }

private:
     bool solve(vector<vector<char>> &board)
     {
          int n = board.size();
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < n; j++)
               {
                    if (board[i][j] == '.')
                    {
                         for (char c = '1'; c <= '9'; c++)
                         {
                              if (isAns(board, i, j, c))
                              {
                                   board[i][j] = c;
                                   if (solve(board))
                                   {
                                        return true;
                                   }
                                   else
                                   {
                                        board[i][j] = '.';
                                   }
                              }
                         }
                         return false;
                    }
               }
          }
          return true;
     }

     bool isAns(vector<vector<char>> &board, int row, int col, char c)
     {
          for (int i = 0; i < 9; i++)
          {
               if (board[i][col] == c || board[row][i] == c || board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c)
               {
                    return false;
               }
          }
          return true;
     }
};

// leetcode -  37