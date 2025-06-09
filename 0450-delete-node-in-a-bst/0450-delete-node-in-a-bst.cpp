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
 int maxVal(TreeNode* root) {
        while (root->right != NULL) {
            root = root->right;
        }
        return root->val;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
        {
            return NULL;
        }
        if(root->val==key)
        {
            if(root->left==NULL && root->right==NULL)
            {
                delete root;
                return NULL;
            }
            else if(root->left==NULL && root->right!=NULL)
            {
                TreeNode* child=root->right;
                delete root;
                return child;
            }      
            else if(root->left!=NULL && root->right==NULL)
            {
                TreeNode* child=root->left;
                delete root;
                return child;
            }      
            else{
                int inorderPre=maxVal(root->left);
                root->val=inorderPre;
                root->left=deleteNode(root->left,inorderPre);
                
            }

        }
        else if(root->val>key)
        {
            root->left =deleteNode(root->left,key);
        }
        else if(root->val<key)
        {
            root->right= deleteNode(root->right,key);
        }
        return root;
    }
};