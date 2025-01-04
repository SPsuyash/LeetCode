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
int find(vector<int>& inorder ,int target , int start , int end)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==target )
        {
            return i;
        }
    }
    return -1;
}
TreeNode* Tree(vector<int>& postorder, vector<int>& inorder,int start ,int end, int index)
{
    if(start>end)
    {
        return NULL;
    }
    TreeNode* root=new TreeNode(postorder[index]);
    int pos=find(inorder,postorder[index],start,end);
     root->right=Tree(postorder,inorder,pos+1,end,index-1);
    root->left=Tree(postorder,inorder,start,pos-1,index-(end-pos)-1);
   

    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        return Tree(postorder,inorder,0,n-1,n-1); 
    }
};
