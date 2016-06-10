/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    var r = s.split("");
    var romap = {
        I: 1,
        V: 5,
        X: 10,
        L: 50,
        C: 100,
        D: 500,
        M: 1000,
    }

    var ans = 0;
    for (var i = 0; i < r.length; i++) {
        var d = romap[r[i]];
        var d1 = romap[r[i+1]];
        
        if (d1 === undefined) {
            ans += d;
            continue;
        }

        if (d >= d1) {
            ans += d;
        } else {
            ans += d1 - d;
            i++;
        }
    }

    return ans;
};
