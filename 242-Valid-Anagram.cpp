class Solution {
public:
    bool isAnagram(string s, string t) {
        std::array<int, 26> count{};
        for (const char c : s)
            count[c - 'a']++;
        for (const char c : t)
            count[c - 'a']--;

        for (int freq : count) {
            if (freq != 0)
                return false;
        }

        return true;
    }
};