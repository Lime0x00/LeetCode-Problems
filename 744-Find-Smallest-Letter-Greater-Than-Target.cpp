class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if (letters.size() == 1) return letters[0];
        int l = 0;
        int r = letters.size() - 1;
        char ans = letters[0];
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (letters[m] > target) {
                ans = letters[m];
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return ans;
    }
};