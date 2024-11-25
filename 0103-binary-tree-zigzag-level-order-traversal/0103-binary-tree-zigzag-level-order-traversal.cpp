class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (!root) return {};
        
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        s1.push(root);
        
        vector<vector<int>> ans;
        
        while (!s1.empty() || !s2.empty()) {
            vector<int> level;
            while (!s1.empty()) {
                TreeNode* temp = s1.top();
                s1.pop();
                level.push_back(temp->val);
                if (temp->left) s2.push(temp->left);
                if (temp->right) s2.push(temp->right);
            }
            if (!level.empty()) ans.push_back(level);
            
            level.clear();
            while (!s2.empty()) {
                TreeNode* temp = s2.top();
                s2.pop();
                level.push_back(temp->val);
                if (temp->right) s1.push(temp->right);
                if (temp->left) s1.push(temp->left);
            }
            if (!level.empty()) ans.push_back(level);
        }
        
        return ans;
    }
};
