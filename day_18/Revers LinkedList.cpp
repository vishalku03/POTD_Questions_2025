class Solution
{
public:
     Node *reverseList(struct Node *head)
     {

          Node *nextPart = head;
          Node *prev = NULL;
          while (nextPart)
          {
               nextPart = head->next;
               head->next = prev;
               prev = head;
               head = nextPart;
          }

          return prev;
     }
};

// gfg