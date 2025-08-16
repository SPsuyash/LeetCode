class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // base case: empty or single node
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        // recursively reverse the rest
        ListNode* newHead = reverseList(head->next);
        // fix links
        head->next->next = head;
        head->next = nullptr;
        
        return newHead;
    }
};
