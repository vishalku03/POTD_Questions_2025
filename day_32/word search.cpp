class Solution
{
public:
     bool flag = false; // To keep track if the word is found

     // DFS function to search the word in the matrix
     void search(vector<vector<char>> &mat, string &word, int row, int col, int i)
     {
          int n1 = mat.size(), n2 = mat[0].size();

          // If out of bounds, return
          if (row < 0 || col < 0 || row >= n1 || col >= n2)
               return;

          // If the character matches
          if (word[i] == mat[row][col])
          {
               // If all characters of the word are found
               if (word.size() - 1 == i)
               {
                    flag = true;
                    return;
               }

               char c = mat[row][col]; // Store current character
               mat[row][col] = '.';    // Mark current cell as visited

               // Search in all four possible directions
               search(mat, word, row - 1, col, i + 1);
               search(mat, word, row + 1, col, i + 1);
               search(mat, word, row, col - 1, i + 1);
               search(mat, word, row, col + 1, i + 1);

               mat[row][col] = c; // Reset the cell to its original value
          }
          return;
     }

     // Function to check if the word exists in the matrix
     bool isWordExist(vector<vector<char>> &mat, string &word)
     {
          int n1 = mat.size(), n2 = mat[0].size();

          // Iterate over each cell in the matrix
          for (int i = 0; i < n1; i++)
          {
               for (int j = 0; j < n2; j++)
               {
                    // If the starting character of the word is found
                    if (mat[i][j] == word[0])
                    {
                         search(mat, word, i, j, 0); // Start DFS from this cell
                    }
               }
          }

          return flag; // Return whether the word was found
     }
};


/// gfg