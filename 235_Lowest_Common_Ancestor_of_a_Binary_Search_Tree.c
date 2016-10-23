struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
  if (!root) return root;

  if (p->val > q->val) return lowestCommonAncestor(root, q, p);
  if (root->val >= p->val && root->val <= q->val) return root;
  if (root->val < p->val) return lowestCommonAncestor(root->right, p, q);
  if (root->val > p->val) return lowestCommonAncestor(root->left, p, q);

  return root;
}

int main() {

}
