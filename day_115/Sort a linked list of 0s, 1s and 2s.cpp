
#include<bits/stdc++.h>
using namespace std;
Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }

Node *split(Node *node, int val)
{
     Node *temp = node;
     while (node)
     {
          if (node->data == val)
          {
               swap(node->data, temp->data);
               temp = temp->next;
          }

          node = node->next;
     }

     return temp;
}

class Solution
{
public:
     Node *segregate(Node *head)
     {
          split(split(head, 0), 1);
          return head;
     }
};

// gfg