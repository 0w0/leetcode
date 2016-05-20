/**
 * Runtime: 172 ms
 */

/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    var sc = countChar(s);
    var tc = countChar(t);

    var sckeys = Object.keys(sc);
    var tckeys = Object.keys(tc);

    var longOne = sc;
    var shortOne = tc;
    if (sckeys < tckeys) {
        longOne = tc;
        shortOne = sc;
    }

    for (var char in longOne) {
        if (!longOne.hasOwnProperty(char) || !shortOne.hasOwnProperty(char) || longOne[char] !== shortOne[char]) {
            return false;
        }
    }

    return true;
};

function countChar(s) {
    var count = {};
    s.split("").forEach(function (char) {
        if (count.hasOwnProperty(char)) {
            count[char] += 1;
        } else {
            count[char] = 1;
        }
    })

    return count;
}
