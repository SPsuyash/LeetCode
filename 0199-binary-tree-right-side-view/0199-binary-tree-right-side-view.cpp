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
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>>anss;

            while(!q.empty())
            {
                int level=q.size();
                vector<int>ans;
                for(int i=0;i<level;i++)
                {
               TreeNode* temp=q.front();
                q.pop();
                ans.push_back(temp->val);
            if(temp->left)
            {
                q.push(temp->left);
            }  
            if(temp->right)
            {
                q.push(temp->right);
            }
            
                }
                anss.push_back(ans);
            }
            vector<int>arr;
            for(int i=0;i<anss.size();i++)
            {
                arr.push_back(anss[i][anss[i].size()-1]);
            }

        return arr;
    }
};