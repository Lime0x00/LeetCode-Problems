class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        std::vector<std::string> ranges;
        int leftIdx = 0;
        for (int rightIdx = 1; rightIdx <= nums.size(); rightIdx++) {
            if (rightIdx == nums.size() ||
                nums[rightIdx] != nums[rightIdx - 1] + 1) {
                ranges.emplace_back(
                    leftIdx == rightIdx - 1
                        ? std::to_string(nums[leftIdx])
                        : std::to_string(nums[leftIdx]) + \->\ +
                              std::to_string(nums[rightIdx - 1]));
                leftIdx = rightIdx;
            }
        }
        return ranges;
    }
};