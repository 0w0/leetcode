/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfThree = function(n) {
    let log3 = function() { return Math.log10(n) / Math.log10(3) };
    
    return Number.isInteger(log3(n))
};
