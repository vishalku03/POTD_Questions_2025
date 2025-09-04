
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
     Node *reverseKGroup(Node *head, int k)
     {
          // code here
          Node *ptr = head, *pt = NULL, *p = NULL, *last = head, *f_last = NULL;
          head = NULL;
          int val = 0;
          while (ptr)
          {

               pt = ptr;
               ptr = ptr->next;
               pt->next = p;
               p = pt;
               val++;

               if (val == k || ptr == NULL)
               {
                    if (head == NULL)
                         head = pt;
                    if (f_last)
                         f_last->next = pt;
                    f_last = last;
                    val = 0;
                    last = ptr;
                    p = NULL;
               }
          }
          return head;
     }
};

// gfg