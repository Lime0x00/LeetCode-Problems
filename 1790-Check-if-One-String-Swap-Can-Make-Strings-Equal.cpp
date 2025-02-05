#include <algorithm>

class Solution {
public:
    bool areAlmostEqual(std::string s1, std::string s2) {
        if (s1 == s2)
            return true;
        if (s1.size() != s2.size())
            return false;

        int m1[26] = {0}, m2[26] = {0};
        int count = 0;

        for (int i = 0; i < s1.size(); i++) {
            m1[s1[i] - 'a']++;
            m2[s2[i] - 'a']++;
            if (s1[i] != s2[i]) count++;
            if (count > 2) break;
        }

        if (count > 2 ||
            !std::equal(std::begin(m1), std::end(m1), std::begin(m2))) {
            return false;
        }

        return true;
    }
};
