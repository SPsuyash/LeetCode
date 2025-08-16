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
    // Function to merge two sorted lists
    ListNode* merge(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;

        if(l1->val < l2->val) {
            l1->next = merge(l1->next, l2);
            return l1;
        } else {
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }

    // Function to find the middle of the linked list
    ListNode* getMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;  // important for splitting

        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;

        // Step 1: Find middle
        ListNode* mid = getMiddle(head);
        ListNode* right = mid->next;
        mid->next = nullptr; // Split into 2 halves
        ListNode* left = head;

        // Step 2: Recursively sort both halves
        left = sortList(left);
        right = sortList(right);

        // Step 3: Merge sorted halves
        return merge(left, right);
    }
};
