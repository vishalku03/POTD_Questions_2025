/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
public:
     Node *findFirstNode(Node *head)
     {

          Node *slow = head;
          Node *fast = head;
          while (fast && fast->next)
          {
               slow = slow->next;
               fast = fast->next->next;
               if (slow == fast)
                    break;
          }

          if (slow != fast)
          {
               return NULL;
          }

          slow = head;
          while (slow != fast)
          {
               slow = slow->next;
               fast = fast->next;
          }

          return slow;
     }
};

// gfg