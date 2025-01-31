
// Naive Solution
// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) {
//         if (nums.size() == 1)
//             return nums[0];
//         double max = -1e9;
//         for (int i = 0; i <= nums.size() - k; i++) {
//             int sum = 0;
//             for (int j = 0; j < k; j++) {
//                 sum += nums[i + j];
//             }
//             max = std::max(static_cast<double>(sum), max);
//         }
//         return (double)max / k;
//     }
// };


//Sliding Window Technique
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        if (nums.size() == 1) return nums[0];
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double max = sum;

        for (int i = k; i < nums.size(); i++) {
            sum = sum - nums[i - k] + nums[i];
            max = std::max(max, static_cast<double>(sum));
        }

        return (double) max / k;
    }
};