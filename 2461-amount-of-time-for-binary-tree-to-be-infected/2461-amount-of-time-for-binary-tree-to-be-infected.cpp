class Solution {
public:
    void find(TreeNode* root, int target, TreeNode*& BurnNode) {
        if (!root) return;
        if (root->val == target) {
            BurnNode = root;
            return;
        }
        find(root->left, target, BurnNode);
        find(root->right, target, BurnNode);
    }

    int Height(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(Height(root->left), Height(root->right));
    }

    int Burn(TreeNode* root, int& timer, int target) {
        if (!root) return 0;
        if (root->val == target) return -1;

        int left = Burn(root->left, timer, target);
        int right = Burn(root->right, timer, target);

        if (left < 0) {
            timer = max(timer, abs(left) + right);
            return left - 1;
        }
        if (right < 0) {
            timer = max(timer, left + abs(right));
            return right - 1;
        }
        return 1 + max(left, right);
    }

    int amountOfTime(TreeNode* root, int start) {
        int timer = 0;
        Burn(root, timer, start);
        TreeNode* BurnNode = NULL;
        find(root, start, BurnNode);
        int high = Height(BurnNode) - 1;
        return max(timer, high);
    }
};
