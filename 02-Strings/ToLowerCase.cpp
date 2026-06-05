/*
LeetCode 709 - To Lower Case

Topic: Strings
Pattern: Character Manipulation

Approach:
Traverse the string character by character.
If a character is an uppercase letter ('A' to 'Z'),
convert it to lowercase by adding 32 to its ASCII value.
Otherwise, keep the character unchanged.

Time Complexity: O(n)
Space Complexity: O(1)

where:
n = length of the input string
*/
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }
        return s;
    }
};