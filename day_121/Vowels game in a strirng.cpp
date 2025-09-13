#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
     bool doesAliceWin(const string &s)
     {
          int totalVowels = 0;
          for (char c : s)
          {
               if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                    totalVowels++;
          }
          return totalVowels > 0; // Alice wins if there is at least one vowel
     }
};

// Here alice win if there is at least one vowel 

// leetcode -  3227