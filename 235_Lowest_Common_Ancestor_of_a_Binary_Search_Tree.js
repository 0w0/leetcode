/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
var lowestCommonAncestor = function(root, p, q) {
    var pPath = findPath(root, p, []);
    var qPath = findPath(root, q, []);

    var long;
    var short;
    if (pPath.length == qPath.length) {
        long = pPath;
        short = qPath;
    } else if (pPath.length > qPath.length) {
        long = pPath;
        short = qPath;
    } else {
        long = qPath;
        short = pPath;
    }

    var ans;
    for (var i = 0; i < long.length; i++) {
        if (long[i] === short[i]) {
            ans = long[i]
        } else {
            return ans;
        }
    }    
};

function findPath(root, goal, path) {
    path.push(root)
    if (root.val === goal.val) {
        return path;
    }

    if (goal.val < root.val) {
        return findPath(root.left, goal, path);
    } else {
        return findPath(root.right, goal, path);
    }
}
