/**
 * @param {string} s
 * @return {string}
 */
var reverseString = function (s) {
    var l = s.length;
    var r_s = '';
    for (var i = l - 1; i >= 0; i--) {
        r_s += s.charAt(i);
    }

    return r_s;
};
