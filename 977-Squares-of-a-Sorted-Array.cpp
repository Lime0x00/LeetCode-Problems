class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int& num : nums) {
            num = num * num;
        }
        std::sort(nums.begin(), nums.end());
        return nums;
    }
};