class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int i = s.find_last_not_of(' ');
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }
        return count;
    }
};