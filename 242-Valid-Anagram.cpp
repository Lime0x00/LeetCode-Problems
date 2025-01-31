class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        std::map<char, int> mapS, mapT;

        for (char c : s) {
            mapS[c]++;
        }
        for (char c : t) {
            mapT[c]++;
        }
        return mapT == mapS;
    }
};