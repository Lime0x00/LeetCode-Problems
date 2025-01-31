#include <iostream>
#include <climits>
#include <math.h>
#include <cmath>

class Solution {
public:
    int findClosestNumber(std::vector<int>& nums) {
        int closestNum = INT_MAX; 
        for (int num : nums) {
            if (abs(num) < abs(closestNum) || (abs(num) == abs(closestNum) && num >     closestNum)) {
            closestNum = num;
        } 
    }
    return closestNum;
    }
};