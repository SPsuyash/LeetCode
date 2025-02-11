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
// class Solution {
// public:
// int Pathsum(TreeNode* root,int &sum)
// {
//     if(!root)
//     {
//         return 0;
//     }
//     if(!root->left && !root->right)
//     {
//         return root->val;
//     }
//     int left=Pathsum(root->left,sum);
//     int right=Pathsum(root->right,sum);
//      //left && right boot
//     if(root->left && root->right)
//     {
//         sum =max(sum,root->val+left+right);
//         return root->val+max(left,right);
//     }
//     //only left
//     if(root->left)
//     {
//         return root->val+left;
//     }
//     //only right exist
//     if(root->right)
//     {
//         return root->val+right;
//     }
//     return sum;

// }
//     int maxPathSum(TreeNode* root) {
//         int sum=INT_MIN;
//         int val=Pathsum(root,sum);
//         //root node hi special
//         if(root->left && root->right)
//         {
//             return sum;
//         }
//         return max(sum,val);
//     }
// };
class Solution {
public:
    int Pathsum(TreeNode* root, int &sum) {
        if (!root) return 0;
        
        // Compute max path sum of left and right subtrees
        int left = max(0, Pathsum(root->left, sum));  // Ignore negative sums
        int right = max(0, Pathsum(root->right, sum));

        // Update the global maximum sum
        sum = max(sum, root->val + left + right);

        // Return max path sum including this node and one of its subtrees
        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        int sum = INT_MIN;
        Pathsum(root, sum);
        return sum;
    }
};
