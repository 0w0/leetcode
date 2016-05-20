/**
 * Runtime: 128 ms
 */

/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    var uni = [];
    for (var i = 0; i < nums1.length; i++) {
        for (var j = 0; j < nums2.length; j++) {
            if (nums1[i] === nums2[j] && isNotInside(nums1[i], uni)) {
                uni.push(nums1[i]);
            }
        }
    }

    return uni;
};

function isNotInside(val, arr) {
    var find = arr.find(function(v) {
        return v === val;
    });

    return isNaN(find);
}
