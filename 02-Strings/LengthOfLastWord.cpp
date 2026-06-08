/*
LeetCode 58 - Length of Last Word

Topic: Strings
Pattern: Reverse Traversal

Approach:
Traverse the string from the end.

First, skip any trailing spaces.
Then, count the characters of the last word
until a space is encountered or the beginning
of the string is reached.

Time Complexity: O(n)
Space Complexity: O(1)

where:
n = length of the input string
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0,j=s.size()-1;
        while(s[j]==' '){
            j--;
        }
        int count=0;
        while(j>=i){
            if(s[j]!=' '){
                count++;
                j--;
            }
            else{
                return count;
            }
        }
        return count;
    }
};