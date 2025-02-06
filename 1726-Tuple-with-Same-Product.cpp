class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        std::unordered_map<int, int> m;
        int result = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int multi = nums[i] * nums[j];
                m[multi]++;
            }
        }
        for (const std::pair<const int, int>& p : m) {
            result += 4 * p.second * (p.second - 1);
        }
        return result;
    }
};