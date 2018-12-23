class Solution {
public:
    int sum = 0;
    TreeNode* convertBST(TreeNode* root) {
        helper(root);
        return root;
    }
    void helper(TreeNode* node) {
        if (node != NULL) {
            helper(node->right);
            sum += node->val;
            node->val = sum;
            helper(node->left);
        }
    }
};
