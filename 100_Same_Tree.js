/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {boolean}
 */
var isSameTree = function(p, q) {
    return JSON.stringify(p) === JSON.stringify(q);
};

/**
 * Runtime: 104 ms
 */
var isSameTree = function(p, q) {
    // First element assertion, since {} always != {}
    // Both null
    if (!p && !q) {
        return true;
    }
    // One is null
    if (!p || !q) {
        return false;
    }

    // Main assertion
    if (p.val !== q.val) {
        return false;
    }

    // Recursion
    if ( ! isSameTree(p.left, q.left)) {
        return false;
    }

    if ( ! isSameTree(p.right, q.right)) {
        return false
    }

    return true;
};