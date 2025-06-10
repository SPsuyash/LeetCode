class Solution {
public:
TreeNode* bstPreorder(vector<int>&result,int s,int e){
    if(s>e)
    {
        return NULL;
    }
        int mid=(s+e)/2;
        int element=result[mid];
        TreeNode* newroot=new TreeNode(element);

        newroot->left=bstPreorder(result,s,mid-1);
        newroot->right=bstPreorder(result,mid+1,e);
        return newroot;
}
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> result;
    while (head != nullptr) {
        result.push_back(head->val);
        head = head->next;
    }
        int s=0;
        int e=result.size()-1;
        return bstPreorder(result,s,e);
    }
};