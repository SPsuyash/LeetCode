class Solution {
public:
 void inorder(TreeNode* root, vector<int>& nodes) {
        if (!root) return;
        inorder(root->left, nodes);
        nodes.push_back(root->val);
        inorder(root->right, nodes);
    }
TreeNode* bstPreorder(vector<int>& root ,int s,int e){
    if(s>e)
    {
        return NULL;
    }
        int mid=(s+e)/2;
        int element=root[mid];
        TreeNode* newroot=new TreeNode(element);

        newroot->left=bstPreorder(root,s,mid-1);
        newroot->right=bstPreorder(root,mid+1,e);
        return newroot;
}
    TreeNode* balanceBST(TreeNode* root) {
       vector<int> nodes;
        inorder(root, nodes);
        return bstPreorder(nodes, 0, nodes.size() - 1);
    }
};