/**
 * Runtime: 136 ms
 */

/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    var l = nums.length;

    for (var i = 0; i < l; i++) {
        if (nums[i] === 0) {
            var z = nums.splice(i, 1);
            nums.push(z[0]);
            i--;
            l--;
        }
    }
};