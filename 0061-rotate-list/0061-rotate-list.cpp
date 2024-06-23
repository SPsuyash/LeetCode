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
ListNode* findNth(ListNode* temp,int k)
{
    int cnt=1;
    while(temp!=NULL)
    {
        if(cnt==k)
        {
            return temp;
        }
        cnt++;
        temp=temp->next;
    }
    return temp;
}
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
         
        if(head==NULL || k==0)
        {
            return head;
        }
        int a=1;
        while(temp->next!=NULL)
        {
            a++;
            temp=temp->next;
        }
        if(k%a==0)
        {
            return head;
        }
        k=k%a;
        temp->next=head;
        ListNode* newlast=findNth(head,a-k);
        head=newlast->next;
        newlast->next=NULL;
        return head;
    }
};