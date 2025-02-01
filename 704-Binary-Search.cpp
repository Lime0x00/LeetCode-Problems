class Solution {
public:
    int search(vector<int>& nums, int target) {
        int leftIdx = 0;
        int rightIdx = nums.size() - 1;
        while (leftIdx <= rightIdx) {
            int middleIdx = (leftIdx + rightIdx) / 2;
            if (nums[middleIdx] == target) {
                return middleIdx;
            } else if (nums[middleIdx] < target) {
                leftIdx = middleIdx + 1;
            } else {
                rightIdx = middleIdx - 1;
            }
        }
        return -1;
    }
};