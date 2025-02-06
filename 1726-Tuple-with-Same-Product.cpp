class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        std::map<int, std::vector<int>> m;
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int multi = nums[i] * nums[j];
                m[multi].push_back(nums[i]);
                m[multi].push_back(nums[j]);
                result += (m[multi].size() / 2) - 1;
            }
        }
        return result * 8;
    }
};