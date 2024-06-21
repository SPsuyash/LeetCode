/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
         if(head == NULL){
            return head;
        }
        if(head->next == NULL){
            return NULL;
        }
        int i=0;
         ListNode* h=head;
         while(h!=NULL)
         {
            h=h->next;
            i++;
         }
         int ans=i/2;
         ListNode* temp=head;
         int j=0;
         while(temp!=NULL)
         {
            if(j==ans-1)
            {
                ListNode* todelete = temp->next;
                temp->next=temp->next->next;
                delete todelete;
            }
            j++;
            temp=temp->next;
         }
         return head;
    }
};