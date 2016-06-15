/**
 * @param {number} num
 * @return {boolean}
 */
var isUgly = function(num) {
    if (num === 0) return false;
    var newNum = num / 2;
    while (Number.isInteger(newNum)) {
        num = newNum;
        newNum = num / 2;
    }
    if (num === 1) return true;

    newNum = num / 3;
    while (Number.isInteger(newNum)) {
        num = newNum;
        newNum = num / 3;
    }
    if (num === 1) return true;

    newNum = num / 5;
    while (Number.isInteger(newNum)) {
        num = newNum;
        newNum = num / 5;
    }
    if (num === 1) return true;

    if (num !== 1) {
        return false;
    }

    return true;
};
