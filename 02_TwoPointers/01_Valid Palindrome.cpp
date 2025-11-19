// 125. Valid Palindrome
// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters,
// it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.

class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size() - 1;
        while(low < high){
            while(!isalnum(s[low]) && low < high){
                low++;
            }
            while(!isalnum(s[high]) && low < high){
                high--;
            }
            if(tolower(s[low]) != tolower(s[high])) return false;
            low++, high--;
        }
        return true;
    }
};
