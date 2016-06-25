/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function(n) {
    while(n !== 1) {
        n = n.toString().split("").map(function(v) {
            return Math.pow(v, 2);
        }).reduce(function(x, y) {
            return x + y;
        });

        if (n.toString().split("").reduce(function(x, y) { return (+x) + (+y); }) === 2) {
            return false;
        }

    }

    return true;
};
