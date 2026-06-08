/*
LeetCode 796 - Rotate String

Topic: Strings
Pattern: String Concatenation

Approach:
A string can be rotated to form another string
if the target string is present as a substring
inside the concatenation of the original string
with itself.

First, ensure both strings have the same length.
Then check whether goal exists in s + s.

Time Complexity: O(n)
Space Complexity: O(n)

where:
n = length of the string
*/
class Solution {
public:
    bool rotateString(string s, string goal) {

        if(s.size() != goal.size())
            return false;

        return (s + s).find(goal) != string::npos;
    }
};