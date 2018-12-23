class Solution {
public:
    TreeNode* root;
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == NULL && t2 == NULL) return root;
        helper(t1,t2);
        return root;   
    }
    TreeNode* helper(TreeNode* t1, TreeNode* t2) {
        TreeNode* n = new TreeNode(0);
        if (root == NULL) root = n;
        if (t1 != NULL && t2 != NULL) {
            n->val = t1->val + t2->val;    
        }
        if (t1 == NULL && t2 == NULL) return NULL;
        else if (t1 == NULL && t2 != NULL) {
            n->val = t2->val;
            n->left = helper(NULL, t2->left);
            n->right = helper(NULL, t2->right);
        }
        else if (t1 != NULL && t2 == NULL) {
            n->val = t1->val;
            n->left = helper(t1->left, NULL);
            n->right = helper(t1->right, NULL);
        } else {
            n->left = helper(t1->left, t2->left);
            n->right = helper(t1->right, t2->right);
        }
        return n;
    }
};
