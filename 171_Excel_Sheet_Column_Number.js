/**
 * @param {string} s
 * @return {number}
 */
var titleToNumber = function (s) {
    var l = s.length;
    var nums = s.split("");
    var ans = 0;
    nums.map(function(num, idx) {
        ans += Math.pow(26, l - idx - 1) * alphaToNum(num);
    });

    return ans;
};

/**
 * @param {string} a
 * @return {number}
 */
var alphaToNum = function (a) {
    if (a === "A") {
        return 1;
    } else {
        return a.charCodeAt(0) - "A".charCodeAt(0) + 1;
    }
}
