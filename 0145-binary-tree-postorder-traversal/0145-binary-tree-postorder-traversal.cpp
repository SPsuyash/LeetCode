/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void postorder(TreeNode* root,vector<int>& ans){
    if (!root) 
    {
        return;
    }
    stack<TreeNode*>s;
     
    s.push(root);
    
    while(!s.empty()){
        TreeNode* temp=s.top();
        s.pop();
        ans.push_back(temp->val);
        
        if(temp->left)
        {
            s.push(temp->left);
        }
        if(temp->right){
            s.push(temp->right);
        }
    }
    
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorder(root,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};