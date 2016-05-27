/**
 * @param {number} n
 * @return {string}
 */
var convertToTitle = function (n) {
    if (n <= 26) {
        return numToAlpha(n);
    }

    var head = Math.floor(n / 26);
    var tail = n % 26;
    if (tail === 0) {
        head = Math.floor(n / 26) - 1;
        tail = 26;
    }

    return r(head, numToAlpha(tail));
};

/**
 * @param {number} n
 * @param {string} ans
 * @return {string}
 */
var r = function (n, ans) {
    if (n <= 26) {
        return numToAlpha(n) + ans;
    }

    var head = Math.floor(n / 26);
    var tail = n % 26;
    if (tail === 0) {
        head = Math.floor(n / 26) - 1;
        tail = 26;
    }

    return r(head, numToAlpha(tail) + ans);
}

/**
 * @param {number} n
 * @return {string}
 */
var numToAlpha = function (num) {
    // console.log(num);
    return String.fromCharCode(64 + num);
}
