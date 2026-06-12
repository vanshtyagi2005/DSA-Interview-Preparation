/*
LeetCode 5 - Longest Palindromic Substring

Topic: Strings
Pattern: Expand Around Center

Approach:
Treat every character and every pair of
adjacent characters as the center of a
potential palindrome.

Expand outward while the characters on
both sides are equal.

Track the starting position and length
of the longest palindrome found.

Time Complexity: O(n²)
Space Complexity: O(1)

where:
n = length of the input string
*/
class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int maxLen = 1;
        for(int i = 0; i < s.size(); i++) {
            int left = i;
            int right = i;
            while(left >= 0 && right < s.size() &&
                  s[left] == s[right]) {
                if(right - left + 1 > maxLen) {
                    maxLen = right - left + 1;
                    start = left;
                }
                left--;
                right++;
            }
            left = i;
            right = i + 1;
            while(left >= 0 && right < s.size() &&
                  s[left] == s[right]) {
                if(right - left + 1 > maxLen) {
                    maxLen = right - left + 1;
                    start = left;
                }
                left--;
                right++;
            }
        }
        return s.substr(start, maxLen);
    }
};