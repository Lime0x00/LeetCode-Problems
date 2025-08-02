/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    let leftIdx = 0;
    let rightIdx = s.length - 1;

    while (leftIdx < rightIdx) {
        while (leftIdx < rightIdx && !isAlphaNumericCharacter(s[leftIdx])) leftIdx++;
        while (leftIdx < rightIdx && !isAlphaNumericCharacter(s[rightIdx])) rightIdx--;

        if (s[leftIdx].toLowerCase() !== s[rightIdx].toLowerCase()) return false;

        leftIdx++;
        rightIdx--;
    }
    return true;
};


function isAlphaNumericCharacter(char) {
    return /[A-Za-z0-9]/.test(char);
}
