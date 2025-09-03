
#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
     Node *swapKth(Node *head, int k)
     {
          k--;
          Node *temp = head;
          while (temp and k--)
          {
               temp = temp->next;
          }

          if (!temp)
               return head;
          Node *first = temp;
          Node *second = head;
          while (temp->next)
          {
               second = second->next;
               temp = temp->next;
          }
          swap(first->data, second->data);
          return head;
     }
};

/// gfg