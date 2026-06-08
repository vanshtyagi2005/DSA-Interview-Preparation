/*
LeetCode 28 - Find the Index of the First Occurrence in a String

Topic: Strings
Pattern: Brute Force String Matching

Approach:
Traverse each possible starting position in the
haystack and compare the substring with the needle
character by character.

If all characters match, return the starting index.
Otherwise, continue checking the next position.

Time Complexity: O(n * m)
Space Complexity: O(1)

where:
n = length of haystack
m = length of needle
*/
class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=needle.size();
        while(i<haystack.size()){
            bool a=true;
            if(haystack[i]==needle[0]){
                int x=0;
                while(x<j){
                    if(haystack[x+i]!=needle[x]){
                        a=false;
                        break;
                    }
                    x++;
                }
            if (a==true){
                return i;
            }
            }
            i++;
        
        }
        return -1;
    }
};