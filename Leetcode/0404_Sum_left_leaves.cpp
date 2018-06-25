class Solution {
public:
    int sum = 0;
    int sumOfLeftLeaves(TreeNode* root) {
        helper(root, false);
        return sum;
    }
    int helper(TreeNode* root, bool isLeft) {
        if (root == NULL) return 0;
        if (root->left == NULL && root->right == NULL && isLeft) {
            return root->val;
        }
        sum += helper (root->left, true);
        helper(root->right, false);
        return 0;
    }
};
