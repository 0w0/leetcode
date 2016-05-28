/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    var checked = {};
    var ans = false;
    for (var i = 0; i < nums.length; i++) {
        if (checked[nums[i]] !== true) {
            checked[nums[i]] = true
        } else {
            ans = true;
            break;
        }
    }

    return ans;
};
