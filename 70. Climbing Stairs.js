/**
 * You are climbing a stair case. It takes n steps to reach to the top.
 * Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
 * Subscribe to see which companies asked this question
 */

/**
 * Submission Result: Time Limit Exceeded
 * 
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    if (n === 1) return 1;
    if (n === 2) return 2;

    return climbStairs(n-1) + climbStairs(n-2);  
};

/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function(n) {
    var ans = [];
    ans[0] = 1;
    ans[1] = 1;
    for (var i = 2; i <= n; i++) {
        ans[i] = ans[i-1] + ans[i-2];
    }

    return ans[n];
};
