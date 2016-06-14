/**
 * @param {number} n - a positive integer
 * @return {number}
 */
var hammingWeight = function(n) {
    var ans = 0;
    while(n !== 0) {
        if (n & 1 === 1) ans++;
        n >>>= 1;
    }

    return ans;
};
