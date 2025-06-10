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
bool check(vector<int>nums,int k)
{
     int n=nums.size();
        int i=0;
        while(i<n)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i] + nums[j] == k)
                {
                  return true;
                   
                }
            }
            i++;
        }

        return false;
}
void inorder(TreeNode* root,vector<int>&nodes)
{
    if(!root) return;
    inorder(root->left,nodes);
    nodes.push_back(root->val);
    inorder(root->right,nodes);

}
    bool findTarget(TreeNode* root, int k) {
        vector<int>nodes;
        inorder(root,nodes);
        return check(nodes,k);
    }
};