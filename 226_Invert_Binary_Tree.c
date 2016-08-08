/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL) return root;

    struct TreeNode* right = root->right;
    struct TreeNode* left = root->left;
    root->left = invertTree(right);
    root->right = invertTree(left);

    return root;
}