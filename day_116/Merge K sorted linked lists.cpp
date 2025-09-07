<<<<<<< HEAD

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
     Node *mergeKLists(vector<Node *> &arr)
     {
          priority_queue<int, vector<int>, greater<int>> pq;
          for (auto &it : arr)
          {
               Node *curr = it;
               while (curr)
               {
                    pq.push(curr->data);
                    curr = curr->next;
               }
          }
          Node *head = new Node(-1000);
          Node *curr = head;
          while (!pq.empty())
          {
               int val = pq.top();
               pq.pop();
               Node *node = new Node(val);
               curr->next = node;
               curr = node;
          }
          return head->next;
     }
};

=======

#include<bits/stdc++.h>
using namespace std;

/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
     Node *mergeKLists(vector<Node *> &arr)
     {
          priority_queue<int, vector<int>, greater<int>> pq;
          for (auto &it : arr)
          {
               Node *curr = it;
               while (curr)
               {
                    pq.push(curr->data);
                    curr = curr->next;
               }
          }
          Node *head = new Node(-1000);
          Node *curr = head;
          while (!pq.empty())
          {
               int val = pq.top();
               pq.pop();
               Node *node = new Node(val);
               curr->next = node;
               curr = node;
          }
          return head->next;
     }
};

>>>>>>> e7d97ececc0b9e0abd813d6490dd4c926b085686
// gfg