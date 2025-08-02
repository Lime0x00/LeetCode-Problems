/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
    let leftIdx = 0;
    let rightIdx = s.length - 1;
    while (leftIdx < rightIdx) {
        const tmp = s[leftIdx];
        s[leftIdx] = s[rightIdx];
        s[rightIdx] = tmp;
        leftIdx++;
        rightIdx--;
    }
};

