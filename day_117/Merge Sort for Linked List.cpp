
#include<bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution
{
public:
     Node *mergeSort(Node *head)
     {
          vector<int> ans;
          Node *temp = head;
          while (temp != NULL)
          {
               ans.push_back(temp->data);
               temp = temp->next;
          }

          sort(ans.begin(), ans.end());
          temp = head;
          int i = 0;
          while (temp != NULL && i < ans.size())
          {
               temp->data = ans[i];
               temp = temp->next;
               i++;
          }
          return head;
     }
};

// geeksforgeeks