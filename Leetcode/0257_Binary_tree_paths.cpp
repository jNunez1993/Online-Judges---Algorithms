class Solution {
public:
    vector<string> paths;
    vector<string> binaryTreePaths(TreeNode* root) {
        helper(root, "");
        return paths;
    }
    void helper(TreeNode* root, string path) {
        if (root == NULL) {
            return;
        }
        path += to_string(root->val) + "->";
        if (root->left == NULL && root->right == NULL) {
            path = path.substr(0,path.size()-2);
            paths.push_back(path);
            return;
        }
        helper(root->left, path);
        helper(root->right, path);
    }
};
