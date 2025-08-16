class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
       ListNode* prev=NULL;
       ListNode* curr=head;
       ListNode* front=NULL;
       while(curr!=nullptr)
       {
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
       }
        return prev;
    }
};
