/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
    var count = {};
    var m = 0;
    nums.forEach(function (v) {
        if (count[v]) {
            count[v]++;
            if (count[v] > count[m]) {
                m = v;
            }
        } else {
            count[v] = 1;
            if (!count[m]) {
                m = v;
            }
        }
    });

    return m;
};
