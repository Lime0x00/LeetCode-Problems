// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int leftIdx = 1;
        int rightIdx = n;
        int firstBad = -1;
        while (leftIdx <= rightIdx) {
            int middleIdx = leftIdx + (rightIdx - leftIdx) / 2;
            if (isBadVersion(middleIdx)) {
                rightIdx = middleIdx - 1;
                firstBad = middleIdx;
            } else {
                leftIdx = middleIdx + 1;
            }
        }
        return firstBad;
    }
};