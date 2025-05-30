// gfg

class Solution
{
public:
     Node *reverse(Node *head)
     {
          Node *temp = head;
          Node *nextnode = NULL, *prev = NULL;

          while (temp != NULL)
          {
               nextnode = temp->next;
               temp->next = prev;
               prev = temp;
               temp = nextnode;
          }

          return prev;
     }
     Node *addTwoLists(Node *num1, Node *num2)
     {
          num1 = reverse(num1);
          num2 = reverse(num2);
          Node *num3 = new Node(-1);
          Node *head = num3;

          int carry = 0;
          while (num1 || num2 || carry)
          {
               int sum = 0;
               if (num1)
               {
                    sum += num1->data;
                    num1 = num1->next;
               }

               if (num2)
               {
                    sum += num2->data;
                    num2 = num2->next;
               }

               sum += carry;
               carry = sum / 10;

               if (num1 == NULL && num2 == NULL && sum == 0 && carry == 0)
               {
                    break;
               }
               Node *newnode = new Node(sum % 10);
               num3->next = newnode;
               num3 = newnode;
          }
          if (carry)
          {
               num3->data += carry;
          }
          head = reverse(head->next);
          return head;
     }
};