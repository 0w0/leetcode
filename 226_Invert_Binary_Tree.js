/**
 * Runtime: 116 ms
 */

/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var invertTree = function(root) {
    if ( ! root) {
        return root;
    }

    var right = root.right;
    var left = root.left;

    root.left = invertTree(right);
    root.right = invertTree(left);

    return root;
};

/**
     4
   /   \
  2     7
 / \   / \
1   3 6   9

    to

     4
   /   \
  7     2
 / \   / \
9   6 3   1

**/