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
    TreeNode* buildBST(vector<int>& preorder, int& index, int upperBound) {
        if (index >= preorder.size() || preorder[index] > upperBound)
            return nullptr;

        TreeNode* root = new TreeNode(preorder[index++]);
        root->left = buildBST(preorder, index, root->val);
        root->right = buildBST(preorder, index, upperBound);
        return root;
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return buildBST(preorder, index, INT_MAX);
    }
};
