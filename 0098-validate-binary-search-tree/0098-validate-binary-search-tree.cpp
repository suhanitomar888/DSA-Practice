class Solution {
public:
    bool validate(TreeNode* node, long long min, long long max) {
        if (node == NULL) return true;

        if (node->val <= min || node->val >= max)
            return false;

        return validate(node->left, min, node->val) &&
               validate(node->right, node->val, max);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    }
};