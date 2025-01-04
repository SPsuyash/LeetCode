// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
// void find(TreeNode* root,int pos ,int& l, int& r)
// {
//     if(!root)
//     {
//         return;
//     }
//     l=min(l,pos);
//     r=max(r,pos);
//     find(root->left,pos-1,l,r);
//     find(root->right,pos+1,l,r);
// }
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         int l=0,r=0;
//         find(root,0,l,r);
//         vector<vector<int>>positive(r+1);
//         vector<vector<int>>negative(abs(l)+1);
//         queue<TreeNode*>q;
//         queue<int>index;
//         q.push(root);
//         index.push(0);
//         while(!q.empty()){
//             TreeNode* temp=q.front();
//             q.pop();
//             int pos=index.front();
//             index.pop();
//             if(pos>=0)
//             {
//                 positive[pos].push_back(temp->val);
//             }
//             else{
//                 negative[abs(pos)].push_back(temp->val);
//             }
//             if(temp->left){
//                 q.push(temp->left);
//                 index.push(pos-1);
//             }
//             if(temp->right)
//             {
//                 q.push(temp->right);
//                 index.push(pos+1);
//             }
//         }
//         vector<vector<int>>ans;
//         for(int i=negative.size()-1;i>0;i--)
//         {
//             ans.push_back(negative[i]);
//         }
//         for(int i=0;i<positive.size();i++)
//         {
//             ans.push_back(positive[i]);
//         }
//         return ans;

//     }
// };


class Solution {
public:
    void find(TreeNode* root, int pos, int& l, int& r) {
        if (!root) return;
        l = min(l, pos);
        r = max(r, pos);
        find(root->left, pos - 1, l, r);
        find(root->right, pos + 1, l, r);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        int l = 0, r = 0;
        find(root, 0, l, r);
        vector<vector<int>> positive(r + 1);
        vector<vector<int>> negative(abs(l) + 1);
        queue<TreeNode*> q;
        queue<int> index;
        
        q.push(root);
        index.push(0);
        
        while (!q.empty()) {
            int size = q.size();
            vector<pair<int, int>> level_nodes;
            
            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                int pos = index.front();
                q.pop();
                index.pop();
                
                level_nodes.push_back({pos, temp->val});
                
                if (temp->left) {
                    q.push(temp->left);
                    index.push(pos - 1);
                }
                if (temp->right) {
                    q.push(temp->right);
                    index.push(pos + 1);
                }
            }
            
            sort(level_nodes.begin(), level_nodes.end());
            
            for (auto& [pos, val] : level_nodes) {
                if (pos >= 0) {
                    positive[pos].push_back(val);
                } else {
                    negative[abs(pos)].push_back(val);
                }
            }
        }
        
        vector<vector<int>> ans;
        for (int i = negative.size() - 1; i > 0; i--) {
            ans.push_back(negative[i]);
        }
        for (int i = 0; i < positive.size(); i++) {
            ans.push_back(positive[i]);
        }
        return ans;
    }
};
