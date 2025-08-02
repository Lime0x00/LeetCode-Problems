/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    nums.sort((a, b) => a - b);
    for (let i = 1; i < nums.length; i++) {
        if (nums[i] === nums[i - 1]) {
            return true;
        }
    }
    return false;
};



var containsDuplicate = function(nums) {
    const tempMap = new Map();
    for (let i = 0; i < nums.length; i++) {
        const value = tempMap.get(nums[i]) ?? 0;
        if (value >= 1) {
            return true;
        }
        tempMap.set(nums[i], value + 1);
    }
    return false;
};

