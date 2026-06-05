/*
LeetCode 392 - Is Subsequence

Topic: Strings
Pattern: Two Pointers

Approach:
Use two pointers to traverse both strings.
Whenever matching characters are found,
advance the pointer in string s.
If all characters of s are matched,
then s is a subsequence of t.

Time Complexity: O(m)
Space Complexity: O(1)

where:
m = length of string t
*/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(j<t.size()){
            if(i==s.size()){
                return true;
            }
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else j++;
        }
        return false;
    }
};