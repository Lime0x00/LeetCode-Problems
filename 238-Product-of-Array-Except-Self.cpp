class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        auto prefix = nums;
        auto postfix = nums;
        std::vector<int> answer(n);
        
        for (int i = 1; i < n; i++) {
            prefix[i] *= prefix[i - 1];
        }

        for (int i = n - 2; i >= 0; i--) {
            postfix[i] *= postfix[i + 1];
        }

         for (int i = 0; i < n; i++) {
            int pre  = (i > 0) ? prefix[i - 1] : 1;
            int post = (i < n - 1) ? postfix[i + 1] : 1;
            answer[i] = pre * post;
        }

        return answer;
    }
};